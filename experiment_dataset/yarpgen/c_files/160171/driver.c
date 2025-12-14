#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9776809938204132567ULL;
unsigned short var_6 = (unsigned short)36318;
unsigned long long int var_8 = 3491203082366322499ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)13125;
unsigned char var_15 = (unsigned char)157;
unsigned long long int var_16 = 17733302612895551045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
