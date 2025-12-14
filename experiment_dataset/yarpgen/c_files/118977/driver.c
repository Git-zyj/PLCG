#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned int var_6 = 1539721507U;
unsigned int var_12 = 1426793777U;
unsigned long long int var_15 = 9338358469761132139ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)12983;
unsigned short var_17 = (unsigned short)53833;
unsigned short var_18 = (unsigned short)58991;
unsigned long long int var_19 = 10819049649687760914ULL;
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
