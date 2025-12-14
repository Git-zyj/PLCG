#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7478652047277468360LL;
unsigned long long int var_3 = 16071423218760636464ULL;
unsigned long long int var_7 = 17281262998519687055ULL;
unsigned long long int var_8 = 3343147083838302563ULL;
unsigned long long int var_10 = 7432179444234775910ULL;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
unsigned long long int var_13 = 14198583697609601954ULL;
int var_14 = 1665800544;
short var_15 = (short)-7276;
int var_16 = 960688386;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
