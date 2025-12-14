#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)39;
unsigned short var_8 = (unsigned short)30745;
unsigned char var_9 = (unsigned char)149;
unsigned char var_11 = (unsigned char)174;
unsigned char var_17 = (unsigned char)48;
int zero = 0;
unsigned int var_18 = 1534172272U;
unsigned short var_19 = (unsigned short)25899;
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
