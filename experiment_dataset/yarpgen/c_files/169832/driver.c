#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)44;
unsigned char var_6 = (unsigned char)98;
short var_8 = (short)28467;
short var_10 = (short)17823;
long long int var_11 = -8818194101711219445LL;
unsigned int var_12 = 2233317623U;
int zero = 0;
unsigned char var_14 = (unsigned char)144;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)15;
long long int var_17 = 8681007642297298103LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
