#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 795264418;
signed char var_3 = (signed char)71;
unsigned char var_5 = (unsigned char)195;
unsigned long long int var_8 = 2233776858833407817ULL;
unsigned long long int var_10 = 16020876305524388982ULL;
int var_11 = -794111560;
unsigned short var_13 = (unsigned short)22524;
unsigned short var_14 = (unsigned short)34809;
unsigned short var_15 = (unsigned short)29853;
int var_16 = -2131016896;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)31273;
short var_20 = (short)29789;
int var_21 = 1584088237;
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
