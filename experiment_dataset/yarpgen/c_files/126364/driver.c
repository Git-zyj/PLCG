#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24464;
signed char var_7 = (signed char)127;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-37;
int var_14 = 574406006;
int zero = 0;
short var_20 = (short)7004;
unsigned int var_21 = 1179132371U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
