#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27985;
unsigned int var_2 = 1163011954U;
long long int var_4 = 9095493805863345150LL;
long long int var_5 = 2719364830407859944LL;
unsigned long long int var_6 = 2061442706719107166ULL;
long long int var_7 = -1581398490697987254LL;
signed char var_8 = (signed char)30;
_Bool var_9 = (_Bool)1;
int var_10 = -1960515497;
int var_13 = 2058835669;
unsigned long long int var_14 = 4762728981179409356ULL;
long long int var_16 = 2826360905692955943LL;
long long int var_17 = 3929419794063966282LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_20 = 4143200089981348682LL;
_Bool var_21 = (_Bool)0;
int var_22 = -662009884;
unsigned char var_23 = (unsigned char)63;
_Bool var_24 = (_Bool)0;
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
