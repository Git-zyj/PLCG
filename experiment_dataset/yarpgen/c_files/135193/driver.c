#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24691;
unsigned short var_1 = (unsigned short)8247;
signed char var_10 = (signed char)-100;
unsigned char var_13 = (unsigned char)14;
long long int var_14 = 1322691742231005187LL;
unsigned int var_15 = 2465143822U;
int zero = 0;
signed char var_16 = (signed char)-78;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
