#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 520561438U;
unsigned short var_10 = (unsigned short)22370;
int zero = 0;
signed char var_13 = (signed char)-42;
unsigned char var_14 = (unsigned char)161;
short var_15 = (short)-8109;
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
