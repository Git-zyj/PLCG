#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
int var_3 = 1651175407;
unsigned int var_4 = 1396992117U;
signed char var_5 = (signed char)86;
signed char var_11 = (signed char)86;
int zero = 0;
unsigned short var_16 = (unsigned short)19657;
short var_17 = (short)22028;
unsigned char var_18 = (unsigned char)215;
long long int var_19 = 8962435424928659300LL;
void init() {
}

void checksum() {
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
