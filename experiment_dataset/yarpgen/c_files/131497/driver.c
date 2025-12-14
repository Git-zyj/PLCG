#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
short var_1 = (short)-1880;
unsigned char var_2 = (unsigned char)254;
signed char var_4 = (signed char)-127;
unsigned char var_5 = (unsigned char)73;
unsigned int var_7 = 4065668208U;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
unsigned char var_12 = (unsigned char)45;
short var_13 = (short)-8590;
short var_14 = (short)-31303;
unsigned long long int var_15 = 14660427384701333067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
