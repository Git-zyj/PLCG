#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60302;
unsigned short var_3 = (unsigned short)27978;
unsigned int var_6 = 482247067U;
unsigned long long int var_11 = 16577127417451957098ULL;
int zero = 0;
short var_13 = (short)16019;
unsigned long long int var_14 = 11400061202462890609ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
