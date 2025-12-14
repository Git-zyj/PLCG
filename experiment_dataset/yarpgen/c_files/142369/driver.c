#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10162;
unsigned int var_3 = 2247976758U;
unsigned short var_8 = (unsigned short)7720;
unsigned short var_10 = (unsigned short)9835;
int zero = 0;
signed char var_12 = (signed char)-88;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
