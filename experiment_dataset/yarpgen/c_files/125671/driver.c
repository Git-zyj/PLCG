#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4074131377U;
unsigned int var_3 = 1595687817U;
unsigned int var_5 = 3143527890U;
unsigned short var_11 = (unsigned short)11094;
unsigned int var_12 = 2216265784U;
unsigned int var_14 = 2058138880U;
long long int var_15 = -7580359875954514978LL;
long long int var_16 = -2976807043112959262LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 4200202897U;
unsigned int var_19 = 184527575U;
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
