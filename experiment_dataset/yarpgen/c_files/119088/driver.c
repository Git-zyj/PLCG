#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16475072919860809347ULL;
signed char var_2 = (signed char)-15;
unsigned long long int var_3 = 6956469860052799916ULL;
unsigned long long int var_7 = 3404112852210736485ULL;
unsigned long long int var_9 = 6671757033103003871ULL;
signed char var_10 = (signed char)27;
int zero = 0;
long long int var_17 = -4779526906513059159LL;
unsigned int var_18 = 1245537326U;
void init() {
}

void checksum() {
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
