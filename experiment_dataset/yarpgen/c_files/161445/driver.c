#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20302;
unsigned long long int var_1 = 13239903209319528715ULL;
signed char var_5 = (signed char)64;
unsigned long long int var_6 = 17203945093297900744ULL;
unsigned long long int var_18 = 3518740047535649416ULL;
int zero = 0;
unsigned long long int var_20 = 4048451728771210036ULL;
unsigned int var_21 = 3849497429U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
