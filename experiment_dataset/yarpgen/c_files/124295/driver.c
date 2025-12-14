#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30976;
unsigned char var_1 = (unsigned char)76;
unsigned char var_2 = (unsigned char)91;
signed char var_4 = (signed char)-57;
short var_5 = (short)-3357;
unsigned short var_6 = (unsigned short)53594;
int var_8 = -1686703434;
unsigned int var_11 = 828712407U;
int zero = 0;
short var_12 = (short)-28482;
unsigned char var_13 = (unsigned char)64;
unsigned int var_14 = 4199313423U;
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
