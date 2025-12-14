#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37466;
unsigned short var_4 = (unsigned short)15918;
unsigned long long int var_5 = 4958704455806322253ULL;
unsigned short var_13 = (unsigned short)25998;
int zero = 0;
unsigned short var_14 = (unsigned short)15033;
unsigned long long int var_15 = 12714489573232249348ULL;
unsigned long long int var_16 = 16101372633019031689ULL;
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
