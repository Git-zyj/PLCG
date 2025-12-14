#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3566259410U;
unsigned int var_7 = 3682148663U;
unsigned long long int var_8 = 10946334432884632933ULL;
unsigned int var_9 = 1562115469U;
unsigned short var_11 = (unsigned short)51522;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3587075662041572969ULL;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)82;
int zero = 0;
unsigned long long int var_19 = 16893647975867903736ULL;
short var_20 = (short)19199;
signed char var_21 = (signed char)61;
_Bool var_22 = (_Bool)0;
long long int var_23 = -3748480149304514551LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
