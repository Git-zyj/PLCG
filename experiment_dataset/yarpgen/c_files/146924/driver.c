#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
unsigned int var_8 = 76170099U;
long long int var_9 = 7444454084978839437LL;
unsigned short var_12 = (unsigned short)14721;
int zero = 0;
signed char var_15 = (signed char)123;
unsigned char var_16 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
