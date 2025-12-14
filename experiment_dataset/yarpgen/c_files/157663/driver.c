#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29714;
unsigned short var_10 = (unsigned short)5266;
signed char var_14 = (signed char)102;
int zero = 0;
unsigned int var_16 = 3315433060U;
signed char var_17 = (signed char)12;
signed char var_18 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
