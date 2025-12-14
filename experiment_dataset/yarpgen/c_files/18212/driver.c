#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)90;
unsigned int var_4 = 3246069521U;
_Bool var_8 = (_Bool)1;
short var_10 = (short)22258;
unsigned short var_12 = (unsigned short)60736;
int zero = 0;
long long int var_13 = 4206777280735620589LL;
signed char var_14 = (signed char)-13;
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
