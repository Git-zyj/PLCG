#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 943611779U;
int var_11 = -1740299406;
unsigned short var_12 = (unsigned short)11272;
unsigned int var_16 = 3151032428U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2108534300U;
_Bool var_20 = (_Bool)0;
int var_21 = 687389499;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
