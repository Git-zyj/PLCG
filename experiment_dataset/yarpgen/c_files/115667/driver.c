#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15805005974928562676ULL;
signed char var_2 = (signed char)-33;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2279140759U;
unsigned short var_6 = (unsigned short)65;
unsigned long long int var_8 = 4310026584534949197ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)37809;
unsigned short var_13 = (unsigned short)50520;
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
