#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4817952735212008736LL;
unsigned long long int var_5 = 12233328066716850856ULL;
unsigned long long int var_6 = 6371020923972296340ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
unsigned short var_13 = (unsigned short)10775;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
