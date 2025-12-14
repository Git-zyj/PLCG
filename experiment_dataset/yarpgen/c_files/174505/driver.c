#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5562;
signed char var_2 = (signed char)99;
unsigned short var_5 = (unsigned short)48737;
unsigned short var_7 = (unsigned short)11962;
_Bool var_8 = (_Bool)1;
long long int var_10 = 8605648275168900235LL;
int zero = 0;
short var_11 = (short)-16651;
unsigned short var_12 = (unsigned short)64178;
unsigned int var_13 = 1483358607U;
signed char var_14 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
