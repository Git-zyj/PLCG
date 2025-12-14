#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1721516034;
signed char var_1 = (signed char)-90;
unsigned long long int var_3 = 2564163664364999656ULL;
int var_6 = 201297244;
unsigned long long int var_10 = 16681951085558564604ULL;
int zero = 0;
int var_13 = -155745861;
int var_14 = -1846552526;
int var_15 = -447384425;
signed char var_16 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
