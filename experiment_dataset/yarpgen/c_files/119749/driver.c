#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1665480143U;
signed char var_4 = (signed char)10;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)70;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)12337;
int zero = 0;
short var_12 = (short)23669;
unsigned char var_13 = (unsigned char)127;
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
