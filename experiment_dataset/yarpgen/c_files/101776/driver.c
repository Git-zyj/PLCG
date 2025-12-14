#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9130494229876916768LL;
_Bool var_9 = (_Bool)1;
unsigned short var_13 = (unsigned short)17213;
int zero = 0;
unsigned long long int var_16 = 11314482590689214909ULL;
unsigned short var_17 = (unsigned short)2874;
short var_18 = (short)3315;
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
