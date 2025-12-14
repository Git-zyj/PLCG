#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18359;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)35262;
_Bool var_5 = (_Bool)1;
unsigned short var_13 = (unsigned short)48862;
int var_16 = 889014244;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2764959421462748442ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)57543;
unsigned short var_21 = (unsigned short)64895;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
