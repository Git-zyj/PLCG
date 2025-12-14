#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
short var_1 = (short)-23421;
unsigned char var_3 = (unsigned char)0;
unsigned char var_4 = (unsigned char)155;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)45;
unsigned short var_8 = (unsigned short)23137;
unsigned long long int var_9 = 6012225419738746443ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 153835320U;
short var_12 = (short)-15737;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
