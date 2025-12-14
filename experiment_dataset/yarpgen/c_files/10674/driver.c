#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
unsigned int var_6 = 3652594464U;
unsigned short var_9 = (unsigned short)28969;
int var_10 = -2007592585;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
unsigned long long int var_12 = 17699656784213701410ULL;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
