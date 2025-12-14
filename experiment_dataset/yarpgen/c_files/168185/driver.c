#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3819173192260711959LL;
unsigned short var_7 = (unsigned short)39948;
unsigned long long int var_11 = 17726108345580873919ULL;
unsigned int var_12 = 3727978228U;
int var_14 = -1023460686;
int zero = 0;
unsigned long long int var_19 = 8621159354915214641ULL;
int var_20 = -1708538406;
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
