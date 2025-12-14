#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned char var_1 = (unsigned char)231;
unsigned char var_2 = (unsigned char)0;
signed char var_6 = (signed char)-90;
unsigned char var_8 = (unsigned char)237;
unsigned char var_9 = (unsigned char)182;
signed char var_10 = (signed char)86;
int zero = 0;
signed char var_11 = (signed char)33;
unsigned short var_12 = (unsigned short)22843;
unsigned short var_13 = (unsigned short)19180;
signed char var_14 = (signed char)-64;
signed char var_15 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
