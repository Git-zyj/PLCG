#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1980073436;
signed char var_1 = (signed char)85;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_8 = (short)7265;
_Bool var_12 = (_Bool)1;
int var_16 = -1903601104;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1889903431U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = -1987672107;
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
