#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)0;
unsigned short var_3 = (unsigned short)44379;
unsigned char var_7 = (unsigned char)214;
unsigned int var_8 = 520386017U;
long long int var_10 = -4584431781185654182LL;
int var_12 = -1896967233;
int var_17 = 22614442;
short var_18 = (short)-493;
int zero = 0;
signed char var_19 = (signed char)122;
int var_20 = 93219797;
signed char var_21 = (signed char)39;
unsigned char var_22 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
