#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57963;
unsigned short var_3 = (unsigned short)37550;
signed char var_4 = (signed char)-17;
signed char var_5 = (signed char)73;
unsigned short var_6 = (unsigned short)64548;
short var_11 = (short)21219;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -725946922;
void init() {
}

void checksum() {
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
