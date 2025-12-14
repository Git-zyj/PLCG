#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)76;
unsigned char var_5 = (unsigned char)123;
short var_8 = (short)-11379;
unsigned char var_10 = (unsigned char)192;
unsigned int var_11 = 508882220U;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)60092;
long long int var_16 = -7503098886225186872LL;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
signed char var_19 = (signed char)-8;
signed char var_20 = (signed char)-22;
unsigned int var_21 = 1057887742U;
unsigned int var_22 = 4107485959U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
