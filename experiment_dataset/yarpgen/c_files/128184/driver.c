#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1239926526;
unsigned int var_7 = 2915515436U;
unsigned short var_13 = (unsigned short)12153;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)62;
long long int var_20 = 9130095771554552715LL;
int var_21 = 781008261;
unsigned char var_22 = (unsigned char)26;
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
