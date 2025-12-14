#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 415428878759505358LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = 7146685563978898915LL;
long long int var_5 = -5276148189261477716LL;
long long int var_6 = 868196657218897011LL;
long long int var_8 = -6995905436080606587LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)28179;
int zero = 0;
short var_11 = (short)8454;
long long int var_12 = -7834520926110193620LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5451668076543061868LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
