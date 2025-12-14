#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1987107724;
unsigned char var_5 = (unsigned char)225;
unsigned long long int var_7 = 7053927153952913838ULL;
unsigned long long int var_14 = 4015380424410407434ULL;
int zero = 0;
unsigned int var_16 = 159073887U;
short var_17 = (short)22763;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
