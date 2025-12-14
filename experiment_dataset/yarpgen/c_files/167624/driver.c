#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9738;
unsigned long long int var_3 = 4079835963368011735ULL;
unsigned int var_13 = 1201883032U;
unsigned int var_19 = 1940114385U;
int zero = 0;
unsigned int var_20 = 2991068800U;
unsigned short var_21 = (unsigned short)52144;
long long int var_22 = 7119106890511698785LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
