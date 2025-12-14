#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4873;
unsigned short var_4 = (unsigned short)265;
unsigned char var_5 = (unsigned char)174;
unsigned long long int var_7 = 13639399492490286197ULL;
short var_12 = (short)16986;
int zero = 0;
unsigned int var_13 = 123164933U;
unsigned long long int var_14 = 15731974308104066582ULL;
short var_15 = (short)2079;
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
