#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-12129;
short var_8 = (short)22056;
unsigned char var_14 = (unsigned char)102;
int zero = 0;
unsigned long long int var_19 = 17915931816539203569ULL;
short var_20 = (short)17996;
unsigned char var_21 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
