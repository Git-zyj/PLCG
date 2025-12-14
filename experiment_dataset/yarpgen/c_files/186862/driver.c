#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33621;
signed char var_7 = (signed char)109;
long long int var_11 = 4513903751721914261LL;
int var_13 = 1811600705;
int zero = 0;
signed char var_17 = (signed char)-98;
unsigned short var_18 = (unsigned short)53210;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
