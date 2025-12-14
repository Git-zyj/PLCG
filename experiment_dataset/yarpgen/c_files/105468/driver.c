#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57502;
unsigned long long int var_1 = 9692341670800276777ULL;
int var_2 = -841344368;
unsigned char var_5 = (unsigned char)198;
int var_6 = -558638591;
unsigned int var_8 = 4148249538U;
int zero = 0;
short var_17 = (short)-17389;
unsigned char var_18 = (unsigned char)137;
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
