#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2345215290U;
unsigned int var_2 = 1501846808U;
signed char var_3 = (signed char)-123;
unsigned int var_5 = 1772406128U;
long long int var_6 = 6822181001344770671LL;
signed char var_7 = (signed char)102;
_Bool var_8 = (_Bool)1;
long long int var_10 = -8063777705151235864LL;
unsigned long long int var_11 = 17497306132306502466ULL;
int zero = 0;
long long int var_12 = 8661068571548356684LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
