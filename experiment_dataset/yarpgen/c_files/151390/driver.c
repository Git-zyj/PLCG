#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 293094370U;
_Bool var_2 = (_Bool)0;
int var_3 = -1932706161;
signed char var_4 = (signed char)-5;
int var_7 = 2064852372;
short var_8 = (short)-9704;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 987022433257214803ULL;
int zero = 0;
short var_13 = (short)31860;
unsigned long long int var_14 = 14956906050031154008ULL;
unsigned long long int var_15 = 17297548265098436148ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
