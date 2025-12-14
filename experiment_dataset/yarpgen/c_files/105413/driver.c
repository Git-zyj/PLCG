#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32115;
unsigned char var_6 = (unsigned char)4;
unsigned int var_7 = 2796468961U;
unsigned int var_8 = 272949827U;
short var_12 = (short)28108;
int zero = 0;
unsigned int var_17 = 2465888546U;
int var_18 = -170599314;
void init() {
}

void checksum() {
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
