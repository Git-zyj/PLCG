#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 714589479U;
unsigned short var_12 = (unsigned short)19983;
unsigned char var_16 = (unsigned char)202;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
unsigned short var_19 = (unsigned short)18422;
signed char var_20 = (signed char)-30;
short var_21 = (short)-8454;
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
