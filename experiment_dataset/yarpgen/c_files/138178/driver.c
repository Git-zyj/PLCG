#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2866546055U;
unsigned long long int var_6 = 134682592004231489ULL;
int var_9 = 1252004261;
short var_14 = (short)14630;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
int var_16 = 1193545825;
unsigned char var_17 = (unsigned char)174;
long long int var_18 = -6358787811570498266LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
