#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47983;
unsigned long long int var_2 = 9241169460947848378ULL;
long long int var_4 = -999534067131338176LL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-13600;
long long int var_13 = -7277035332527157268LL;
unsigned short var_14 = (unsigned short)13624;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7660272385061732382LL;
int zero = 0;
signed char var_17 = (signed char)37;
long long int var_18 = 1400454415955664902LL;
long long int var_19 = 8150370273436204830LL;
short var_20 = (short)3784;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
