#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned short var_1 = (unsigned short)62814;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)21853;
signed char var_7 = (signed char)0;
unsigned char var_8 = (unsigned char)24;
_Bool var_9 = (_Bool)0;
int var_10 = 1770208523;
int zero = 0;
short var_12 = (short)26767;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)73;
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
