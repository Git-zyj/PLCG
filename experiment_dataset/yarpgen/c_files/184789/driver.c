#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39461;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-9724;
signed char var_8 = (signed char)51;
int zero = 0;
signed char var_12 = (signed char)86;
unsigned int var_13 = 3341150669U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
