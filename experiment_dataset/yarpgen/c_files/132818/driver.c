#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19377;
unsigned short var_3 = (unsigned short)15565;
unsigned short var_4 = (unsigned short)37708;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)163;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
unsigned char var_16 = (unsigned char)225;
signed char var_17 = (signed char)-10;
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
