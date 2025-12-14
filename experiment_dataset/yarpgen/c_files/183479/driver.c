#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2010092966;
unsigned int var_1 = 1625234434U;
_Bool var_2 = (_Bool)0;
int var_5 = -1328911578;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)104;
long long int var_14 = -9141630730566013025LL;
int zero = 0;
unsigned short var_15 = (unsigned short)32775;
unsigned long long int var_16 = 12288720068392491579ULL;
short var_17 = (short)-29470;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
