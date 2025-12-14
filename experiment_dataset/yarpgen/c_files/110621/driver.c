#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned int var_8 = 3754288467U;
_Bool var_14 = (_Bool)0;
long long int var_16 = -8350725090446102560LL;
int zero = 0;
signed char var_17 = (signed char)-12;
short var_18 = (short)5265;
signed char var_19 = (signed char)-28;
void init() {
}

void checksum() {
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
