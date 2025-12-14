#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 215334236;
unsigned int var_1 = 2832561007U;
unsigned short var_3 = (unsigned short)30488;
long long int var_4 = 2418797672494414816LL;
unsigned int var_5 = 2693715953U;
short var_6 = (short)29585;
unsigned int var_7 = 1321212006U;
unsigned char var_8 = (unsigned char)29;
int zero = 0;
unsigned short var_10 = (unsigned short)36004;
unsigned long long int var_11 = 5531096800953834585ULL;
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
