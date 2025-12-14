#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42383;
unsigned char var_1 = (unsigned char)37;
signed char var_2 = (signed char)33;
unsigned char var_3 = (unsigned char)156;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-11;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1553130586;
unsigned short var_13 = (unsigned short)44379;
signed char var_14 = (signed char)107;
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
