#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21908;
unsigned int var_1 = 3335381147U;
unsigned int var_2 = 1213653077U;
short var_5 = (short)-22124;
unsigned char var_6 = (unsigned char)29;
int var_8 = 197462964;
int zero = 0;
long long int var_12 = -8363096611960025874LL;
long long int var_13 = 4416039653315195569LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
