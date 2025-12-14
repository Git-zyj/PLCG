#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)44886;
signed char var_7 = (signed char)-92;
short var_8 = (short)-29393;
int zero = 0;
unsigned short var_12 = (unsigned short)52512;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)31199;
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
