#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13595276375199579328ULL;
unsigned long long int var_1 = 313898920091426780ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 12326961534341673177ULL;
int var_5 = -1991194882;
signed char var_6 = (signed char)-116;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 240466742U;
unsigned short var_13 = (unsigned short)65424;
void init() {
}

void checksum() {
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
