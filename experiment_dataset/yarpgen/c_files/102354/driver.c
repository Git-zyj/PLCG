#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1678857997;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-91;
_Bool var_8 = (_Bool)1;
int var_10 = 358150505;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -3038133182604848405LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
