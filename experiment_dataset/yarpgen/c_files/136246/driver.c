#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
unsigned int var_5 = 3605504072U;
short var_6 = (short)-23575;
signed char var_8 = (signed char)69;
long long int var_12 = -3926611382730319813LL;
unsigned int var_14 = 3153642493U;
long long int var_16 = 4145369132681237190LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)64261;
unsigned int var_21 = 3699489373U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 6984316728509469613LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
