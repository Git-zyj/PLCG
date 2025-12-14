#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 4260724882U;
int var_11 = -1900228375;
signed char var_12 = (signed char)108;
int zero = 0;
unsigned int var_16 = 2928345448U;
unsigned int var_17 = 2064562330U;
long long int var_18 = 8463534848309532817LL;
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
