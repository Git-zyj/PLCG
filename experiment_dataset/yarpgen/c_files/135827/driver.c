#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_11 = -1825477489;
signed char var_15 = (signed char)-91;
long long int var_17 = 8710166156698689871LL;
int zero = 0;
unsigned int var_19 = 3011389964U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2094485117764261921LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
