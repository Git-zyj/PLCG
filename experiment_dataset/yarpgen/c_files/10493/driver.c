#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 585546086U;
signed char var_6 = (signed char)-62;
unsigned char var_7 = (unsigned char)199;
unsigned short var_12 = (unsigned short)29783;
signed char var_14 = (signed char)9;
unsigned char var_16 = (unsigned char)195;
unsigned char var_18 = (unsigned char)183;
int zero = 0;
short var_20 = (short)5739;
unsigned int var_21 = 970213045U;
signed char var_22 = (signed char)-63;
void init() {
}

void checksum() {
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
