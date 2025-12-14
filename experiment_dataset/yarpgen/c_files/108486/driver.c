#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
signed char var_3 = (signed char)-92;
unsigned short var_5 = (unsigned short)12585;
unsigned int var_9 = 3640678601U;
signed char var_10 = (signed char)54;
int zero = 0;
unsigned long long int var_11 = 1553164621515353206ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13548833412237234204ULL;
unsigned short var_14 = (unsigned short)24266;
int var_15 = 548541438;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
