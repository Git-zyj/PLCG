#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21175;
unsigned int var_8 = 2739832616U;
int var_11 = 2098286238;
long long int var_15 = -7711891588075212575LL;
int zero = 0;
unsigned short var_19 = (unsigned short)26601;
short var_20 = (short)3985;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
