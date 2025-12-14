#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16101;
long long int var_1 = -2919874996020198071LL;
unsigned char var_2 = (unsigned char)42;
unsigned char var_3 = (unsigned char)123;
int var_4 = 2074113321;
unsigned long long int var_5 = 4589268183051461349ULL;
unsigned int var_6 = 3455025074U;
unsigned short var_8 = (unsigned short)29238;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
unsigned long long int var_10 = 9950105671087721145ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3598372693U;
int var_13 = 634658400;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
