#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25055;
short var_2 = (short)-31256;
unsigned short var_4 = (unsigned short)19455;
int var_6 = 509001957;
unsigned char var_8 = (unsigned char)89;
int zero = 0;
unsigned int var_10 = 4280000768U;
signed char var_11 = (signed char)-53;
unsigned char var_12 = (unsigned char)158;
int var_13 = 2082768863;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
