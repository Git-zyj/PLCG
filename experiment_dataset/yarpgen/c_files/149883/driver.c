#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)52585;
short var_7 = (short)-11925;
signed char var_9 = (signed char)43;
int var_14 = -800571710;
int zero = 0;
unsigned int var_19 = 2491444196U;
short var_20 = (short)-7498;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
