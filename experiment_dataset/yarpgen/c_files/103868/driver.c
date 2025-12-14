#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned long long int var_1 = 4116208533701296729ULL;
unsigned long long int var_2 = 5950891748841671810ULL;
short var_5 = (short)-6440;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 10769706638985689609ULL;
unsigned char var_11 = (unsigned char)68;
short var_14 = (short)-832;
int zero = 0;
unsigned short var_15 = (unsigned short)51157;
unsigned char var_16 = (unsigned char)234;
signed char var_17 = (signed char)-123;
void init() {
}

void checksum() {
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
