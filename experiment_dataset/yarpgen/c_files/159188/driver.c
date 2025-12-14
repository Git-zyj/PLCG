#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1861885909U;
signed char var_1 = (signed char)93;
unsigned long long int var_3 = 913073850591939780ULL;
unsigned int var_4 = 25510554U;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-16885;
unsigned int var_10 = 2300012629U;
signed char var_11 = (signed char)-52;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)174;
int zero = 0;
unsigned int var_18 = 795350678U;
unsigned int var_19 = 3596375528U;
int var_20 = 554591621;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
