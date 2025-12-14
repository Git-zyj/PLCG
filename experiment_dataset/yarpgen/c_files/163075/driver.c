#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3344819945U;
unsigned long long int var_4 = 6803499233326469414ULL;
unsigned long long int var_6 = 12772857345772727324ULL;
unsigned int var_12 = 154295166U;
int zero = 0;
unsigned short var_14 = (unsigned short)26844;
unsigned long long int var_15 = 4328645275769812773ULL;
unsigned long long int var_16 = 10885514386141189152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
