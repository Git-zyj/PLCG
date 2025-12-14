#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7230540939806558747LL;
signed char var_1 = (signed char)-80;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 942296973U;
int var_5 = 502927244;
unsigned char var_8 = (unsigned char)94;
short var_10 = (short)27256;
unsigned short var_11 = (unsigned short)14275;
unsigned int var_12 = 1616141364U;
unsigned int var_13 = 651015327U;
int zero = 0;
unsigned short var_14 = (unsigned short)12157;
long long int var_15 = 106376662331921604LL;
short var_16 = (short)24713;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
