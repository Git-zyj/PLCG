#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18178;
unsigned int var_5 = 2213490976U;
unsigned long long int var_11 = 13031928107292205867ULL;
unsigned char var_12 = (unsigned char)117;
short var_14 = (short)-17100;
signed char var_16 = (signed char)-84;
unsigned int var_17 = 907137942U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2511373116479284729LL;
short var_22 = (short)-23481;
unsigned long long int var_23 = 15949538901431642389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
