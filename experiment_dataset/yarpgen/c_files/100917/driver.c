#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -2014149443;
short var_4 = (short)1203;
unsigned long long int var_6 = 17245609936528114457ULL;
unsigned int var_9 = 2367967167U;
unsigned int var_12 = 2586170978U;
int zero = 0;
int var_15 = 2036129337;
long long int var_16 = 8984358068975309766LL;
short var_17 = (short)8828;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
