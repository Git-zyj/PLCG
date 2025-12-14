#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-13;
short var_9 = (short)12050;
signed char var_11 = (signed char)127;
int zero = 0;
signed char var_12 = (signed char)20;
unsigned int var_13 = 3432928865U;
unsigned short var_14 = (unsigned short)13141;
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
