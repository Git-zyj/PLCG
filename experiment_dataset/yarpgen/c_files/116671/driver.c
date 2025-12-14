#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8003792820107736239LL;
unsigned int var_6 = 33759424U;
unsigned char var_10 = (unsigned char)181;
int var_11 = 471679833;
int zero = 0;
short var_14 = (short)-18419;
long long int var_15 = 1383748353276980157LL;
unsigned short var_16 = (unsigned short)30601;
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
