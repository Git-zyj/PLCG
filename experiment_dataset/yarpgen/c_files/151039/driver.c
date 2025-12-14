#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26354;
_Bool var_3 = (_Bool)1;
int var_4 = 1648001919;
_Bool var_7 = (_Bool)0;
long long int var_8 = 5553322150242624407LL;
short var_9 = (short)1922;
int zero = 0;
unsigned long long int var_10 = 7817647411070557600ULL;
signed char var_11 = (signed char)57;
unsigned short var_12 = (unsigned short)65357;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
