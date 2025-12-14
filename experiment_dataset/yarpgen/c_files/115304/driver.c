#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4105261663021799176LL;
unsigned short var_3 = (unsigned short)54802;
int var_5 = -1342874935;
unsigned short var_7 = (unsigned short)57006;
unsigned short var_11 = (unsigned short)7455;
int zero = 0;
unsigned int var_14 = 3275890034U;
unsigned short var_15 = (unsigned short)55743;
long long int var_16 = -5652230479661930623LL;
unsigned short var_17 = (unsigned short)22426;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
