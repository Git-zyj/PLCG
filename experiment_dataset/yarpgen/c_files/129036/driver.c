#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6557628716631596480LL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -4139235768003818178LL;
unsigned int var_8 = 1456873260U;
unsigned char var_13 = (unsigned char)31;
int zero = 0;
unsigned int var_15 = 419103820U;
long long int var_16 = -3649526553834992173LL;
unsigned short var_17 = (unsigned short)36775;
unsigned char var_18 = (unsigned char)206;
long long int var_19 = 4626469874460138533LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
