#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
long long int var_2 = 5531953200934967989LL;
unsigned short var_3 = (unsigned short)39097;
unsigned char var_4 = (unsigned char)183;
unsigned short var_6 = (unsigned short)2012;
unsigned char var_7 = (unsigned char)244;
short var_8 = (short)-30878;
unsigned short var_9 = (unsigned short)1055;
signed char var_11 = (signed char)24;
int zero = 0;
short var_12 = (short)-23173;
int var_13 = -1561743577;
unsigned char var_14 = (unsigned char)121;
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
