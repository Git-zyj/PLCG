#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 508249016U;
long long int var_5 = 3944057127242970623LL;
unsigned short var_6 = (unsigned short)51932;
int var_13 = 1855635341;
unsigned short var_14 = (unsigned short)43726;
int zero = 0;
unsigned short var_17 = (unsigned short)6312;
unsigned short var_18 = (unsigned short)59857;
unsigned long long int var_19 = 2074732323299981584ULL;
void init() {
}

void checksum() {
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
