#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32358;
unsigned short var_3 = (unsigned short)15320;
unsigned int var_6 = 771140849U;
int var_9 = -1316999841;
int zero = 0;
short var_19 = (short)26736;
unsigned char var_20 = (unsigned char)61;
unsigned char var_21 = (unsigned char)144;
unsigned short var_22 = (unsigned short)14020;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
