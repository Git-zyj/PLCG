#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32058;
long long int var_5 = -5760050442702592616LL;
int var_8 = -596884716;
int var_10 = -1727746725;
int zero = 0;
long long int var_13 = -7672759703715195941LL;
long long int var_14 = 4566036595562517194LL;
unsigned short var_15 = (unsigned short)4788;
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
