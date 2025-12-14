#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 822945650;
signed char var_1 = (signed char)-87;
int var_2 = 974702242;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)48213;
signed char var_8 = (signed char)-127;
unsigned int var_9 = 3693689338U;
int zero = 0;
signed char var_12 = (signed char)22;
long long int var_13 = -1054983359540863090LL;
unsigned long long int var_14 = 17080926112935797430ULL;
unsigned short var_15 = (unsigned short)25597;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
