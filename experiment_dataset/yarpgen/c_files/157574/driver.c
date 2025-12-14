#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 529297863U;
short var_1 = (short)22587;
short var_2 = (short)-29520;
signed char var_4 = (signed char)-78;
unsigned int var_5 = 692341169U;
short var_6 = (short)22444;
signed char var_7 = (signed char)-11;
unsigned int var_8 = 4123371971U;
short var_12 = (short)12136;
int zero = 0;
short var_13 = (short)8203;
unsigned int var_14 = 2000065457U;
short var_15 = (short)16237;
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
