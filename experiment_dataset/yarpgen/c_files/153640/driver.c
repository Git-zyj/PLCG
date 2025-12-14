#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25144;
unsigned char var_1 = (unsigned char)74;
long long int var_2 = 3241189679357398635LL;
unsigned long long int var_3 = 3281678708950118959ULL;
unsigned char var_4 = (unsigned char)114;
int var_5 = -1904490955;
unsigned short var_6 = (unsigned short)20630;
unsigned short var_7 = (unsigned short)32836;
signed char var_8 = (signed char)83;
int zero = 0;
unsigned int var_11 = 1705460910U;
unsigned char var_12 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
