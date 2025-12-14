#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11269714878284014722ULL;
int var_1 = -2023828733;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-109;
int var_4 = -1677319102;
int var_5 = 1013066365;
int var_6 = 1685385748;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)107;
int var_9 = 325354951;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 243097655477072623ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16450395090935439325ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = 765782866;
int var_19 = 338552088;
unsigned long long int var_20 = 10262749304087377353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
