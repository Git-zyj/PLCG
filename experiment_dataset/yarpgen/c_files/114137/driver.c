#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2420924781U;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)144;
unsigned char var_6 = (unsigned char)3;
signed char var_7 = (signed char)24;
int var_8 = -1549012327;
int zero = 0;
unsigned short var_10 = (unsigned short)23673;
unsigned char var_11 = (unsigned char)238;
long long int var_12 = 6430282505111579645LL;
long long int var_13 = -8515031511253293862LL;
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
