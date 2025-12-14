#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
int var_8 = 1710076028;
short var_10 = (short)-28604;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 443240652U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-48;
long long int var_18 = 1944824156788565169LL;
unsigned short var_19 = (unsigned short)11838;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
