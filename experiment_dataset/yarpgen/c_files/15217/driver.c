#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7763620621022023936ULL;
short var_2 = (short)-27425;
unsigned long long int var_5 = 9282501691163115168ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 13122507198721236734ULL;
long long int var_11 = 3620130846025157513LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17282517894293467909ULL;
int var_15 = 2034987274;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
