#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_1 = (unsigned char)146;
signed char var_6 = (signed char)-39;
unsigned char var_8 = (unsigned char)19;
short var_10 = (short)6884;
unsigned short var_12 = (unsigned short)33077;
int zero = 0;
unsigned char var_15 = (unsigned char)67;
signed char var_16 = (signed char)-54;
signed char var_17 = (signed char)-25;
unsigned short var_18 = (unsigned short)42346;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
