#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49124;
unsigned short var_3 = (unsigned short)47612;
unsigned long long int var_4 = 4524987710609536919ULL;
unsigned char var_5 = (unsigned char)152;
unsigned short var_6 = (unsigned short)13005;
unsigned int var_11 = 591301285U;
unsigned long long int var_16 = 1972684584994746826ULL;
int zero = 0;
short var_20 = (short)32358;
unsigned char var_21 = (unsigned char)231;
unsigned long long int var_22 = 3370953410614049565ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
