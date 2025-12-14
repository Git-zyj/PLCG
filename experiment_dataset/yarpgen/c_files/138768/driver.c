#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3869178736U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-26715;
signed char var_5 = (signed char)83;
unsigned int var_8 = 1858969726U;
int var_9 = 915926587;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
signed char var_12 = (signed char)-13;
unsigned short var_13 = (unsigned short)53554;
unsigned short var_14 = (unsigned short)17425;
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
