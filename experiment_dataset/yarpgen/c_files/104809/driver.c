#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8617288398038098576ULL;
unsigned short var_2 = (unsigned short)26475;
unsigned char var_3 = (unsigned char)65;
unsigned short var_4 = (unsigned short)19713;
unsigned short var_5 = (unsigned short)963;
unsigned short var_6 = (unsigned short)12819;
unsigned int var_7 = 4096511773U;
unsigned int var_8 = 3982047890U;
unsigned char var_9 = (unsigned char)76;
int zero = 0;
unsigned short var_10 = (unsigned short)41534;
signed char var_11 = (signed char)75;
unsigned char var_12 = (unsigned char)208;
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
