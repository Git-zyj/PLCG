#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1809285249;
signed char var_2 = (signed char)-4;
unsigned int var_5 = 753415782U;
unsigned long long int var_6 = 17670779282156748007ULL;
_Bool var_8 = (_Bool)0;
int var_12 = -146967097;
int var_17 = -1823349028;
int zero = 0;
unsigned int var_18 = 1874123341U;
_Bool var_19 = (_Bool)1;
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
