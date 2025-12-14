#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11562306280839689270ULL;
unsigned int var_2 = 2007409340U;
unsigned long long int var_4 = 3316701884908606204ULL;
unsigned long long int var_5 = 18364198775094802466ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_13 = (unsigned char)19;
unsigned char var_14 = (unsigned char)101;
int zero = 0;
unsigned short var_15 = (unsigned short)20102;
unsigned long long int var_16 = 14478435733236801878ULL;
unsigned int var_17 = 1934547390U;
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
