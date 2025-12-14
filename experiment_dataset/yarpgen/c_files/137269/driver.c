#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
short var_6 = (short)-29449;
unsigned long long int var_9 = 12701083522400265420ULL;
short var_10 = (short)-2262;
signed char var_11 = (signed char)57;
unsigned short var_12 = (unsigned short)30706;
short var_13 = (short)5506;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)48;
signed char var_16 = (signed char)31;
signed char var_18 = (signed char)30;
int zero = 0;
int var_20 = 214369017;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
long long int var_23 = 74832932005863778LL;
void init() {
}

void checksum() {
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
