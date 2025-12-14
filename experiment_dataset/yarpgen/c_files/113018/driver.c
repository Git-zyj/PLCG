#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1980085077004119394ULL;
unsigned long long int var_1 = 17988536506101703956ULL;
unsigned short var_4 = (unsigned short)10933;
signed char var_5 = (signed char)-80;
unsigned short var_11 = (unsigned short)51677;
_Bool var_13 = (_Bool)1;
long long int var_16 = -5680569610926300688LL;
int zero = 0;
unsigned short var_19 = (unsigned short)62416;
unsigned int var_20 = 1127676720U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
