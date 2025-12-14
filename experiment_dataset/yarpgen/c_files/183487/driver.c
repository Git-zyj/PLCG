#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5732537769840325453LL;
unsigned char var_1 = (unsigned char)87;
short var_3 = (short)22345;
unsigned long long int var_4 = 3317203643712786202ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1955930511U;
unsigned long long int var_8 = 710100764825703210ULL;
unsigned long long int var_10 = 3056466644459644566ULL;
int var_11 = -1685696505;
int zero = 0;
unsigned long long int var_13 = 4342035964039931916ULL;
int var_14 = 2086899274;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3458294664340242850LL;
short var_17 = (short)19868;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
