#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16772;
unsigned short var_4 = (unsigned short)17805;
unsigned int var_8 = 2061843480U;
int zero = 0;
signed char var_13 = (signed char)59;
unsigned char var_14 = (unsigned char)226;
unsigned short var_15 = (unsigned short)27056;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
