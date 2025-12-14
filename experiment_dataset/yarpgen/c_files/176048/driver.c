#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)188;
short var_3 = (short)24126;
unsigned char var_4 = (unsigned char)104;
signed char var_5 = (signed char)-95;
unsigned char var_6 = (unsigned char)34;
unsigned char var_7 = (unsigned char)40;
unsigned char var_8 = (unsigned char)210;
short var_9 = (short)-32632;
short var_12 = (short)15230;
signed char var_14 = (signed char)-40;
int zero = 0;
unsigned char var_15 = (unsigned char)23;
unsigned char var_16 = (unsigned char)116;
signed char var_17 = (signed char)91;
short var_18 = (short)25961;
unsigned char var_19 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
