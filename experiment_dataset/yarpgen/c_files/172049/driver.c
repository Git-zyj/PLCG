#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65294;
unsigned short var_5 = (unsigned short)44420;
unsigned char var_11 = (unsigned char)172;
unsigned short var_16 = (unsigned short)32745;
int zero = 0;
unsigned char var_18 = (unsigned char)141;
unsigned short var_19 = (unsigned short)26257;
unsigned short var_20 = (unsigned short)59328;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
