#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
int var_2 = 1972352556;
short var_4 = (short)4849;
unsigned char var_7 = (unsigned char)84;
unsigned short var_10 = (unsigned short)7441;
unsigned char var_15 = (unsigned char)90;
int var_17 = -457836056;
int zero = 0;
long long int var_18 = 2154813592130685361LL;
unsigned int var_19 = 2173793735U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
