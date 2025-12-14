#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4241757540U;
unsigned int var_3 = 3302095242U;
unsigned short var_9 = (unsigned short)23691;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
long long int var_20 = -7271711091333125199LL;
short var_21 = (short)20590;
unsigned short var_22 = (unsigned short)35199;
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
