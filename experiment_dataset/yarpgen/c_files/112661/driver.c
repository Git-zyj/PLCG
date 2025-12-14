#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)499;
short var_12 = (short)9358;
unsigned short var_13 = (unsigned short)44386;
unsigned int var_14 = 1612376730U;
unsigned long long int var_17 = 12664334757562758160ULL;
int zero = 0;
unsigned int var_18 = 2062840951U;
int var_19 = -802415874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
