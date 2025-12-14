#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-832;
unsigned int var_7 = 150435585U;
signed char var_8 = (signed char)-29;
unsigned int var_9 = 2361248452U;
int zero = 0;
unsigned int var_10 = 3334266987U;
unsigned short var_11 = (unsigned short)30253;
int var_12 = -1685281135;
long long int var_13 = -1999610471944129062LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
