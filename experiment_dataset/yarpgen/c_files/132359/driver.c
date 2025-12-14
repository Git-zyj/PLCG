#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)233;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)105;
unsigned char var_8 = (unsigned char)113;
unsigned int var_10 = 3388572611U;
int var_11 = 1583692640;
int zero = 0;
signed char var_12 = (signed char)70;
signed char var_13 = (signed char)-84;
unsigned short var_14 = (unsigned short)50338;
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
