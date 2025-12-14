#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)7350;
signed char var_8 = (signed char)48;
unsigned int var_9 = 4256099936U;
int zero = 0;
int var_14 = -351483036;
int var_15 = -1038468788;
unsigned short var_16 = (unsigned short)11341;
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
