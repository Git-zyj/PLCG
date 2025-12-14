#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1635475392;
unsigned int var_3 = 2391641495U;
unsigned int var_6 = 2064668160U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)19366;
int zero = 0;
short var_17 = (short)16306;
short var_18 = (short)25368;
unsigned int var_19 = 3454852950U;
signed char var_20 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
