#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2673452290056754001ULL;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)40;
unsigned short var_11 = (unsigned short)57662;
signed char var_12 = (signed char)-62;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)99;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2528893862250155941ULL;
int var_22 = -1220194409;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
