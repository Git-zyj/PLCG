#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19507;
short var_6 = (short)7101;
short var_7 = (short)13444;
short var_9 = (short)-27780;
short var_10 = (short)-13801;
short var_13 = (short)1183;
int zero = 0;
short var_14 = (short)18257;
short var_15 = (short)-28521;
short var_16 = (short)-24993;
short var_17 = (short)-22073;
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
