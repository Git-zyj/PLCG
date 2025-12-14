#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -264328132;
unsigned long long int var_2 = 10549782186428888768ULL;
unsigned short var_3 = (unsigned short)64207;
unsigned long long int var_8 = 17135974088279612632ULL;
unsigned char var_10 = (unsigned char)206;
short var_11 = (short)-16470;
int zero = 0;
unsigned short var_14 = (unsigned short)23380;
short var_15 = (short)-24326;
unsigned char var_16 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
