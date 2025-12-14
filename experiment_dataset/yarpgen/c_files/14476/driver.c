#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28779;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-28;
signed char var_11 = (signed char)-108;
unsigned int var_12 = 3413724254U;
int zero = 0;
short var_13 = (short)-32667;
short var_14 = (short)-31947;
unsigned char var_15 = (unsigned char)156;
void init() {
}

void checksum() {
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
