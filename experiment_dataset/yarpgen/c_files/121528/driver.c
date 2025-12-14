#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -396116836;
unsigned short var_1 = (unsigned short)21842;
signed char var_6 = (signed char)-122;
unsigned int var_7 = 4065613564U;
int var_8 = 2004473872;
unsigned long long int var_9 = 16278825250443221097ULL;
int zero = 0;
short var_10 = (short)-8634;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-3015;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
