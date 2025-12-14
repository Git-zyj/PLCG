#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4782;
_Bool var_7 = (_Bool)1;
int var_13 = 483909159;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_20 = 1440901882;
unsigned char var_21 = (unsigned char)0;
int var_22 = -511244038;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
