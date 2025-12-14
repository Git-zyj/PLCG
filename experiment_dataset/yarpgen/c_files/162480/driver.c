#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 431043961;
unsigned short var_1 = (unsigned short)29020;
unsigned int var_3 = 2731618235U;
unsigned long long int var_4 = 4091284190861494475ULL;
unsigned int var_5 = 1737481740U;
unsigned int var_8 = 2700314788U;
long long int var_9 = 8829062946260004534LL;
signed char var_11 = (signed char)-71;
int zero = 0;
unsigned short var_13 = (unsigned short)63621;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3245722339U;
unsigned short var_16 = (unsigned short)3111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
