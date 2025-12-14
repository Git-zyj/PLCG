#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35437;
unsigned char var_3 = (unsigned char)231;
short var_7 = (short)8359;
unsigned long long int var_18 = 15553712004865938983ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)231;
short var_20 = (short)-5056;
short var_21 = (short)21497;
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
