#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)65;
unsigned short var_6 = (unsigned short)10058;
int var_7 = -467777472;
short var_8 = (short)-9745;
unsigned int var_9 = 2389873880U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)4240;
int zero = 0;
short var_13 = (short)-7251;
short var_14 = (short)-8697;
void init() {
}

void checksum() {
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
