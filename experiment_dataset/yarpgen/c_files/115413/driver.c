#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26723;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2637658554U;
signed char var_8 = (signed char)-52;
long long int var_12 = -2029066589720710720LL;
unsigned long long int var_13 = 4589787079161285207ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1066213250U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)42791;
unsigned long long int var_18 = 3870326707772358459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
