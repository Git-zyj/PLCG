#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4611;
int var_2 = -242697481;
int var_3 = 247514840;
long long int var_7 = -8897038063181254906LL;
int var_10 = -1363281329;
unsigned int var_11 = 3305685851U;
int var_13 = -1601250916;
unsigned int var_14 = 1373460736U;
long long int var_15 = -2099166982563036794LL;
int var_16 = 2058752760;
int zero = 0;
signed char var_18 = (signed char)106;
long long int var_19 = -8434863544495607464LL;
int var_20 = 1101052642;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
