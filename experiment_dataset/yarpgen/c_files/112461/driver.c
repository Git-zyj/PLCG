#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3193790230521703434LL;
unsigned short var_8 = (unsigned short)8936;
unsigned short var_10 = (unsigned short)14286;
int var_14 = 1718255440;
unsigned int var_15 = 4224891972U;
int zero = 0;
long long int var_16 = -669588150382913819LL;
unsigned int var_17 = 2267033980U;
void init() {
}

void checksum() {
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
