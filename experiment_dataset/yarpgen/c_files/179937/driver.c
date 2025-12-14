#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13111747792946015365ULL;
unsigned char var_3 = (unsigned char)219;
unsigned short var_8 = (unsigned short)51044;
unsigned long long int var_11 = 11671615459554127043ULL;
unsigned long long int var_13 = 1793824921393065143ULL;
unsigned int var_14 = 1376836690U;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned char var_17 = (unsigned char)220;
unsigned long long int var_18 = 9836451459837185298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
