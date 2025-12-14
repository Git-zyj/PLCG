#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned char var_2 = (unsigned char)32;
unsigned char var_3 = (unsigned char)151;
unsigned short var_7 = (unsigned short)47285;
signed char var_9 = (signed char)-40;
unsigned int var_12 = 3255069663U;
int zero = 0;
short var_16 = (short)32441;
unsigned int var_17 = 518370922U;
void init() {
}

void checksum() {
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
