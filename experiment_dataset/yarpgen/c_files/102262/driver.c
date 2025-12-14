#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
unsigned short var_2 = (unsigned short)44311;
unsigned int var_4 = 3410925217U;
long long int var_5 = 2907688187382758402LL;
int zero = 0;
int var_13 = 1478503790;
unsigned short var_14 = (unsigned short)53526;
signed char var_15 = (signed char)12;
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
