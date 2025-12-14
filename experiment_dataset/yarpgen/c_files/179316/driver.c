#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
long long int var_4 = -3366444058761939428LL;
unsigned int var_5 = 1882408970U;
_Bool var_10 = (_Bool)0;
short var_12 = (short)12526;
unsigned char var_15 = (unsigned char)120;
int zero = 0;
unsigned int var_16 = 3239111767U;
unsigned int var_17 = 1864708322U;
unsigned int var_18 = 3548063670U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
