#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7811301627511881442ULL;
short var_4 = (short)-7478;
unsigned char var_6 = (unsigned char)200;
unsigned int var_7 = 2820095470U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)5092;
int var_11 = 717042774;
int zero = 0;
int var_15 = 1558048475;
unsigned long long int var_16 = 8417669916811215127ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
