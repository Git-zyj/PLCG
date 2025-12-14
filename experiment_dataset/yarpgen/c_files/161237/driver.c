#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1235472682U;
unsigned int var_1 = 2797780087U;
unsigned int var_3 = 867506766U;
unsigned int var_5 = 4196032625U;
unsigned int var_7 = 179476944U;
unsigned int var_8 = 2090136967U;
signed char var_9 = (signed char)-46;
unsigned short var_10 = (unsigned short)20079;
unsigned long long int var_12 = 2716550526805174911ULL;
unsigned int var_13 = 3046380146U;
long long int var_15 = 5391562937240468832LL;
int zero = 0;
unsigned int var_16 = 3326761810U;
unsigned int var_17 = 190653084U;
long long int var_18 = 1538166990513047587LL;
unsigned int var_19 = 3145831992U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
