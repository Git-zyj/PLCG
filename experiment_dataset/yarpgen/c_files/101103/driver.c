#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18818;
int var_5 = -1727300784;
unsigned int var_6 = 2894813282U;
unsigned short var_9 = (unsigned short)30317;
int var_10 = -2125197548;
unsigned int var_13 = 1148670102U;
int zero = 0;
unsigned short var_14 = (unsigned short)19676;
long long int var_15 = -8873434829992613639LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
