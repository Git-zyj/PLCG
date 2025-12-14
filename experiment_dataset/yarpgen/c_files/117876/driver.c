#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)1;
unsigned long long int var_6 = 2882747848694392921ULL;
unsigned short var_7 = (unsigned short)39335;
int zero = 0;
unsigned short var_19 = (unsigned short)55322;
long long int var_20 = -4986643567255355089LL;
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
