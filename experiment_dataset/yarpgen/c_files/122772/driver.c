#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 15961917708966984364ULL;
unsigned long long int var_5 = 4473155700236937503ULL;
int var_9 = -1399609516;
unsigned int var_10 = 3696097717U;
int zero = 0;
signed char var_16 = (signed char)22;
unsigned short var_17 = (unsigned short)50176;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
