#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
signed char var_2 = (signed char)31;
unsigned int var_3 = 2936065606U;
unsigned char var_7 = (unsigned char)27;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
unsigned char var_11 = (unsigned char)156;
unsigned char var_12 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
