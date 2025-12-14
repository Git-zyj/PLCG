#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5126373998750464569ULL;
unsigned long long int var_3 = 6231685597293429306ULL;
short var_4 = (short)32471;
short var_10 = (short)26705;
int zero = 0;
short var_15 = (short)4881;
unsigned long long int var_16 = 10110410147874817775ULL;
short var_17 = (short)17777;
void init() {
}

void checksum() {
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
