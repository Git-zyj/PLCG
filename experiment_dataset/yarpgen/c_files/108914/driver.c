#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1199257160319720429LL;
unsigned int var_8 = 848312282U;
unsigned int var_11 = 3363250557U;
unsigned short var_13 = (unsigned short)48852;
unsigned int var_17 = 1744758115U;
int zero = 0;
int var_18 = -1656020240;
unsigned char var_19 = (unsigned char)252;
unsigned int var_20 = 3438922556U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
