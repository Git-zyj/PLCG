#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29983;
signed char var_2 = (signed char)45;
unsigned int var_4 = 1637932238U;
unsigned int var_6 = 3751608479U;
unsigned int var_13 = 3479865004U;
int zero = 0;
long long int var_14 = 5065719588176012268LL;
unsigned char var_15 = (unsigned char)228;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
