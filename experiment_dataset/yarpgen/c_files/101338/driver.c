#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1806642245U;
long long int var_4 = 2051863913273952352LL;
unsigned long long int var_5 = 3788700615458429754ULL;
int var_8 = 772707098;
unsigned char var_11 = (unsigned char)133;
unsigned char var_12 = (unsigned char)121;
short var_18 = (short)-27236;
int zero = 0;
int var_19 = 1469152869;
unsigned short var_20 = (unsigned short)48445;
unsigned short var_21 = (unsigned short)60818;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
