#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2580;
unsigned int var_8 = 3028692231U;
unsigned int var_9 = 3723166399U;
int zero = 0;
unsigned long long int var_15 = 2126189001512379117ULL;
unsigned long long int var_16 = 15816867178637159702ULL;
unsigned long long int var_17 = 6626157945641788628ULL;
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
