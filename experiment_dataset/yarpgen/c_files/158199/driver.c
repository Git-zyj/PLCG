#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 9087418895981480860LL;
long long int var_9 = -6212596670019066181LL;
signed char var_12 = (signed char)12;
int zero = 0;
unsigned int var_13 = 1188332870U;
short var_14 = (short)-15496;
long long int var_15 = -4551381788493909429LL;
unsigned char var_16 = (unsigned char)188;
short var_17 = (short)-23372;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
