#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1309240495168650510ULL;
short var_1 = (short)1775;
unsigned long long int var_5 = 8884931976009689607ULL;
unsigned char var_6 = (unsigned char)28;
int var_7 = 47567696;
long long int var_8 = 6667953136580065739LL;
int var_9 = -1447981068;
unsigned short var_10 = (unsigned short)486;
unsigned int var_11 = 2703084599U;
unsigned char var_12 = (unsigned char)112;
int zero = 0;
int var_13 = -445106213;
unsigned int var_14 = 2562924418U;
int var_15 = -693320810;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
