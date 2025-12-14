#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -1952393118315726543LL;
unsigned short var_3 = (unsigned short)21634;
short var_4 = (short)11552;
unsigned int var_7 = 857343560U;
signed char var_9 = (signed char)93;
unsigned int var_10 = 2046066994U;
unsigned char var_12 = (unsigned char)168;
unsigned int var_13 = 2248844294U;
int zero = 0;
signed char var_14 = (signed char)31;
short var_15 = (short)21641;
unsigned char var_16 = (unsigned char)50;
unsigned short var_17 = (unsigned short)41728;
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
