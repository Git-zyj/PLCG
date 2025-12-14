#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6407;
unsigned int var_2 = 2707348970U;
long long int var_9 = -4557990373097372621LL;
long long int var_11 = -6943358543835194368LL;
short var_12 = (short)28479;
int zero = 0;
unsigned short var_14 = (unsigned short)58895;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)240;
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
