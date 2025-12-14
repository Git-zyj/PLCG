#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
int var_3 = 1941665804;
unsigned long long int var_6 = 11373147273436756990ULL;
short var_12 = (short)12712;
long long int var_13 = 7315528365672809932LL;
unsigned char var_15 = (unsigned char)102;
signed char var_17 = (signed char)-96;
int zero = 0;
unsigned short var_18 = (unsigned short)46542;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
