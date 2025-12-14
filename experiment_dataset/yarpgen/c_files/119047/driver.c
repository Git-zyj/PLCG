#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 104950731U;
short var_5 = (short)4849;
unsigned short var_10 = (unsigned short)4153;
long long int var_11 = 661061362834583351LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 17951544085404287149ULL;
long long int var_15 = -4561437051314947529LL;
unsigned int var_16 = 995021725U;
void init() {
}

void checksum() {
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
