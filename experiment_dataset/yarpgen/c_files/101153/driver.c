#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19449;
unsigned char var_4 = (unsigned char)22;
short var_5 = (short)8644;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 769006695U;
signed char var_13 = (signed char)-42;
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
