#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2198662601U;
unsigned char var_1 = (unsigned char)140;
signed char var_6 = (signed char)83;
unsigned short var_13 = (unsigned short)44265;
unsigned short var_16 = (unsigned short)58629;
int zero = 0;
int var_18 = -1788347360;
unsigned char var_19 = (unsigned char)48;
unsigned long long int var_20 = 11174667513240435933ULL;
unsigned long long int var_21 = 12989730344431542628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
