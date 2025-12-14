#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7823403894602104439LL;
int var_3 = 10124292;
unsigned short var_4 = (unsigned short)21978;
unsigned int var_5 = 815629593U;
unsigned short var_15 = (unsigned short)48383;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)66;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
