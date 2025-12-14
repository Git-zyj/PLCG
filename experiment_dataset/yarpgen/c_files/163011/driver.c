#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
unsigned int var_2 = 3119208511U;
unsigned short var_10 = (unsigned short)20083;
int zero = 0;
int var_15 = 129769571;
long long int var_16 = 4024769356226370154LL;
unsigned char var_17 = (unsigned char)189;
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
