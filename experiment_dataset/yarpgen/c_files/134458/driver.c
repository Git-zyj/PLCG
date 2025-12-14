#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
signed char var_1 = (signed char)78;
short var_6 = (short)-4686;
unsigned long long int var_9 = 16214713854459515418ULL;
unsigned long long int var_11 = 16272538048956374936ULL;
int var_12 = 1035172968;
unsigned int var_15 = 1967658609U;
unsigned char var_16 = (unsigned char)29;
unsigned int var_18 = 1419626735U;
int zero = 0;
unsigned long long int var_19 = 11900199498125820665ULL;
unsigned long long int var_20 = 18276208599700895205ULL;
void init() {
}

void checksum() {
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
