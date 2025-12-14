#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 573533325U;
unsigned int var_7 = 2766876712U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_13 = -122377001;
signed char var_15 = (signed char)-80;
int zero = 0;
long long int var_18 = -6595159829829137461LL;
long long int var_19 = 8355397042846057076LL;
int var_20 = -1273719462;
_Bool var_21 = (_Bool)1;
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
