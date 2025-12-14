#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8991383154800028192ULL;
signed char var_4 = (signed char)-39;
unsigned char var_7 = (unsigned char)182;
short var_8 = (short)11991;
unsigned int var_12 = 797027348U;
int zero = 0;
long long int var_13 = 3777952964326339975LL;
int var_14 = -1836325416;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
