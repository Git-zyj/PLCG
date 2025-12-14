#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-66;
long long int var_9 = 4741891626529829174LL;
unsigned int var_13 = 3260184572U;
int zero = 0;
unsigned int var_14 = 637507595U;
short var_15 = (short)17509;
signed char var_16 = (signed char)-101;
signed char var_17 = (signed char)51;
unsigned int var_18 = 2360136738U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
