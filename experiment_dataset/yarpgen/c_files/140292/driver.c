#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4162759745924901201LL;
unsigned int var_10 = 3793428637U;
unsigned int var_12 = 710315965U;
int zero = 0;
unsigned short var_15 = (unsigned short)9810;
unsigned int var_16 = 986263865U;
short var_17 = (short)4250;
unsigned short var_18 = (unsigned short)59338;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
