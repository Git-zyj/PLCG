#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -739022310;
unsigned int var_12 = 3735460920U;
int var_15 = -1301172345;
unsigned long long int var_17 = 12529948917763118430ULL;
int zero = 0;
unsigned long long int var_18 = 2316899628814068742ULL;
unsigned short var_19 = (unsigned short)1918;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
