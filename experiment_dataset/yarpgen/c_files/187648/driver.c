#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2627581848U;
unsigned int var_5 = 43379680U;
unsigned short var_6 = (unsigned short)31664;
unsigned char var_7 = (unsigned char)206;
long long int var_8 = 3883137642977873796LL;
int var_10 = -1751444830;
int var_13 = 132918981;
int zero = 0;
unsigned int var_14 = 2273151339U;
unsigned int var_15 = 2174440456U;
unsigned short var_16 = (unsigned short)28303;
int var_17 = 177785407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
