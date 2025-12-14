#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
_Bool var_11 = (_Bool)0;
short var_15 = (short)12963;
unsigned short var_16 = (unsigned short)40260;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3950894648U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
