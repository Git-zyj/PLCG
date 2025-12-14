#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 631582934U;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)45476;
unsigned long long int var_8 = 721339106643005448ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_14 = 3049958471U;
unsigned short var_16 = (unsigned short)4272;
unsigned char var_18 = (unsigned char)65;
int zero = 0;
unsigned short var_19 = (unsigned short)47928;
unsigned short var_20 = (unsigned short)21199;
unsigned short var_21 = (unsigned short)14263;
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
