#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20175;
unsigned short var_2 = (unsigned short)26829;
unsigned short var_4 = (unsigned short)31725;
unsigned short var_5 = (unsigned short)48544;
unsigned short var_6 = (unsigned short)15065;
unsigned short var_10 = (unsigned short)7481;
int zero = 0;
unsigned short var_12 = (unsigned short)2217;
unsigned short var_13 = (unsigned short)49701;
unsigned short var_14 = (unsigned short)8647;
unsigned short var_15 = (unsigned short)20666;
unsigned short var_16 = (unsigned short)32443;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
