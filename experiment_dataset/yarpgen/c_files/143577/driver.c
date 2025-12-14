#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1695781505;
int var_1 = 2005898512;
long long int var_5 = 5954904609944017166LL;
unsigned char var_6 = (unsigned char)54;
unsigned long long int var_9 = 8787771289016168321ULL;
long long int var_10 = -7141248382190076653LL;
int zero = 0;
int var_11 = -1447452211;
unsigned short var_12 = (unsigned short)64825;
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
