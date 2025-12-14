#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43100;
unsigned int var_7 = 2561759476U;
unsigned int var_9 = 3546604134U;
unsigned int var_11 = 3457106114U;
int zero = 0;
unsigned short var_13 = (unsigned short)20911;
unsigned short var_14 = (unsigned short)20044;
unsigned short var_15 = (unsigned short)51603;
unsigned int var_16 = 1931534526U;
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
