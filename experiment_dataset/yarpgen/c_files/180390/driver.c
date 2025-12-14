#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
long long int var_1 = -7631942203504878051LL;
_Bool var_2 = (_Bool)1;
int var_3 = -1821766028;
int var_4 = 671463645;
int var_5 = 770980455;
int var_6 = -989666484;
short var_7 = (short)18848;
short var_8 = (short)2870;
unsigned long long int var_9 = 2836326496994938287ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3923856211U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-18183;
unsigned long long int var_15 = 9834844780006388328ULL;
signed char var_16 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
