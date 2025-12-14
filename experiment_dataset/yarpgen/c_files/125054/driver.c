#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_17 = 1381525364U;
unsigned int var_18 = 172559505U;
unsigned long long int var_19 = 11632758641805997570ULL;
unsigned int var_20 = 1598511051U;
unsigned long long int var_21 = 218520532735333701ULL;
unsigned long long int var_22 = 1371049351520704675ULL;
unsigned int var_23 = 3311063704U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
