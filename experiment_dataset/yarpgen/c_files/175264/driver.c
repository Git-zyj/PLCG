#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3174165089363295098LL;
unsigned int var_5 = 2603991063U;
unsigned short var_7 = (unsigned short)20962;
unsigned short var_10 = (unsigned short)22158;
int zero = 0;
int var_11 = 1264484879;
unsigned int var_12 = 2731627310U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
