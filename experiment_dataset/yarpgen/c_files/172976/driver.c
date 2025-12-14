#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned long long int var_2 = 16816975348769584765ULL;
signed char var_11 = (signed char)14;
int var_14 = -1295526165;
int zero = 0;
unsigned char var_15 = (unsigned char)172;
unsigned char var_16 = (unsigned char)170;
unsigned short var_17 = (unsigned short)22317;
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
