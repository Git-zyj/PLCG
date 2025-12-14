#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51925;
unsigned char var_3 = (unsigned char)130;
signed char var_5 = (signed char)29;
signed char var_7 = (signed char)-68;
signed char var_8 = (signed char)-19;
unsigned int var_17 = 317543042U;
unsigned short var_19 = (unsigned short)65310;
int zero = 0;
unsigned int var_20 = 576808421U;
unsigned int var_21 = 1093829463U;
unsigned int var_22 = 1375846741U;
signed char var_23 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
