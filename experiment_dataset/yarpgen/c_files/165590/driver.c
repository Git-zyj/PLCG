#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1180364264U;
short var_1 = (short)29132;
unsigned char var_2 = (unsigned char)10;
unsigned char var_6 = (unsigned char)240;
unsigned short var_7 = (unsigned short)49929;
unsigned short var_9 = (unsigned short)59577;
unsigned char var_11 = (unsigned char)7;
int zero = 0;
unsigned long long int var_13 = 12560757212069783500ULL;
unsigned short var_14 = (unsigned short)43972;
void init() {
}

void checksum() {
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
