#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1913764648675964819LL;
short var_5 = (short)4441;
unsigned short var_6 = (unsigned short)16620;
long long int var_8 = 4760806718646272983LL;
short var_13 = (short)3866;
long long int var_15 = -334557122278959154LL;
int zero = 0;
unsigned short var_16 = (unsigned short)45543;
unsigned short var_17 = (unsigned short)18022;
void init() {
}

void checksum() {
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
