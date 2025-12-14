#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13140;
unsigned char var_2 = (unsigned char)48;
unsigned char var_6 = (unsigned char)107;
unsigned short var_7 = (unsigned short)35782;
unsigned int var_8 = 3710350801U;
unsigned long long int var_9 = 7018268084664468013ULL;
signed char var_13 = (signed char)24;
short var_17 = (short)-32549;
int zero = 0;
unsigned short var_18 = (unsigned short)60269;
long long int var_19 = 3030448447807629399LL;
signed char var_20 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
