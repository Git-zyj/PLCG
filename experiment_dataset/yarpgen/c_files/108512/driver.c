#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned char var_4 = (unsigned char)73;
signed char var_9 = (signed char)-53;
int var_14 = -523250242;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1232803303U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)5250;
void init() {
}

void checksum() {
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
