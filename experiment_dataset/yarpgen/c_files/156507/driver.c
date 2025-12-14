#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17805;
unsigned long long int var_8 = 11639158694384455608ULL;
long long int var_10 = -2077818694406611217LL;
int zero = 0;
signed char var_15 = (signed char)55;
long long int var_16 = -7593063613166047064LL;
unsigned short var_17 = (unsigned short)64924;
unsigned int var_18 = 1893531787U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
