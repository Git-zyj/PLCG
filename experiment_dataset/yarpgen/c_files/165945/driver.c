#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7574899103097843707LL;
short var_1 = (short)-4541;
unsigned int var_2 = 2851535778U;
short var_3 = (short)-19836;
unsigned int var_4 = 4030059188U;
long long int var_6 = -2899858909799220216LL;
unsigned int var_7 = 2136362173U;
unsigned char var_8 = (unsigned char)111;
short var_11 = (short)28506;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
unsigned char var_13 = (unsigned char)80;
short var_14 = (short)15687;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
