#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3536044311U;
unsigned int var_6 = 3525732401U;
unsigned int var_7 = 1722261320U;
unsigned long long int var_12 = 4816337344991881128ULL;
int zero = 0;
unsigned long long int var_13 = 1285112727441063180ULL;
unsigned long long int var_14 = 14016620915942252058ULL;
unsigned long long int var_15 = 8730087173601009941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
