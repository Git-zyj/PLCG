#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2890596856U;
unsigned short var_5 = (unsigned short)2013;
long long int var_8 = 2398579646007983392LL;
int zero = 0;
signed char var_10 = (signed char)65;
unsigned short var_11 = (unsigned short)11332;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
