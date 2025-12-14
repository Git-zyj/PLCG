#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3285005029U;
unsigned short var_2 = (unsigned short)36592;
unsigned int var_5 = 1870314975U;
unsigned long long int var_6 = 6880309528740450949ULL;
unsigned char var_7 = (unsigned char)1;
int var_8 = -1311981551;
unsigned char var_9 = (unsigned char)126;
int zero = 0;
short var_14 = (short)-27295;
signed char var_15 = (signed char)31;
unsigned long long int var_16 = 16903299090810510064ULL;
unsigned long long int var_17 = 10763436146963846190ULL;
unsigned char var_18 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
