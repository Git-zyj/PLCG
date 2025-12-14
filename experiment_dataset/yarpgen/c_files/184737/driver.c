#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned char var_3 = (unsigned char)181;
int var_5 = 907716833;
unsigned char var_8 = (unsigned char)46;
unsigned short var_10 = (unsigned short)46545;
long long int var_13 = -8454157312382010609LL;
int var_16 = -1863876978;
int zero = 0;
unsigned long long int var_18 = 6231898289079250763ULL;
unsigned int var_19 = 2694905944U;
short var_20 = (short)29470;
unsigned char var_21 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
