#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-25508;
long long int var_6 = -8796595414439268798LL;
unsigned int var_7 = 4066480230U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3424685838U;
unsigned char var_13 = (unsigned char)91;
unsigned char var_14 = (unsigned char)60;
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
