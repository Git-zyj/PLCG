#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-704;
unsigned int var_2 = 512933643U;
signed char var_6 = (signed char)-12;
unsigned short var_7 = (unsigned short)22665;
unsigned int var_9 = 127354468U;
unsigned short var_12 = (unsigned short)6576;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned long long int var_16 = 12181895661439739262ULL;
unsigned int var_17 = 1886319117U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
