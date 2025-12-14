#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 464398914U;
unsigned short var_8 = (unsigned short)9359;
unsigned char var_10 = (unsigned char)102;
unsigned int var_13 = 2945398212U;
unsigned int var_14 = 2543827061U;
int zero = 0;
long long int var_17 = 7232904247037991313LL;
unsigned short var_18 = (unsigned short)4398;
short var_19 = (short)-32397;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
