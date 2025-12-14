#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
unsigned char var_5 = (unsigned char)110;
unsigned short var_7 = (unsigned short)58606;
unsigned int var_8 = 4201522729U;
unsigned long long int var_9 = 15813364489826493740ULL;
int zero = 0;
short var_16 = (short)23299;
signed char var_17 = (signed char)75;
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
