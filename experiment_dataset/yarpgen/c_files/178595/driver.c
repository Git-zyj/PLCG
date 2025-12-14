#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15063605711397067614ULL;
short var_3 = (short)29954;
long long int var_4 = -6094302160239836576LL;
_Bool var_5 = (_Bool)1;
int var_6 = 522098020;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)35319;
unsigned short var_10 = (unsigned short)42793;
long long int var_12 = -5406414752947254368LL;
signed char var_13 = (signed char)-77;
unsigned char var_15 = (unsigned char)3;
int zero = 0;
signed char var_17 = (signed char)5;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
