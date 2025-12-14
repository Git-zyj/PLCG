#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61885;
unsigned short var_5 = (unsigned short)5558;
unsigned int var_6 = 1268628332U;
unsigned short var_12 = (unsigned short)64200;
int zero = 0;
long long int var_14 = -6824727003025833030LL;
signed char var_15 = (signed char)115;
unsigned int var_16 = 914501600U;
long long int var_17 = 6013177777064423231LL;
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
