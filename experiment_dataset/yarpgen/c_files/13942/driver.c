#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2769938166U;
unsigned int var_10 = 3845636400U;
short var_11 = (short)-15889;
unsigned int var_13 = 2605962879U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13682;
short var_16 = (short)26737;
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
