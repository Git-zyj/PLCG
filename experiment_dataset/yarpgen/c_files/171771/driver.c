#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1614675421U;
unsigned short var_6 = (unsigned short)8371;
long long int var_14 = -2907013247417372358LL;
int zero = 0;
unsigned short var_16 = (unsigned short)64235;
long long int var_17 = -7261578152892297991LL;
void init() {
}

void checksum() {
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
