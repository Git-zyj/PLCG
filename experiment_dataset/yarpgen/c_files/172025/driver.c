#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
unsigned short var_2 = (unsigned short)33262;
long long int var_3 = 7816612682249637725LL;
unsigned int var_7 = 2476289482U;
int zero = 0;
unsigned char var_15 = (unsigned char)249;
unsigned int var_16 = 91737863U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
