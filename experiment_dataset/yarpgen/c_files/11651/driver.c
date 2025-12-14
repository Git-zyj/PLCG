#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44291;
int var_1 = 1211215275;
short var_3 = (short)18692;
unsigned short var_5 = (unsigned short)63377;
unsigned short var_9 = (unsigned short)1788;
long long int var_11 = -3229174997957952421LL;
unsigned int var_12 = 1619300985U;
unsigned long long int var_15 = 13304668239389850612ULL;
unsigned short var_17 = (unsigned short)45141;
long long int var_19 = -2789338323661870959LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)180;
int var_22 = -2077129629;
unsigned char var_23 = (unsigned char)76;
unsigned short var_24 = (unsigned short)31064;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
