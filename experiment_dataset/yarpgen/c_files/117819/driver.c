#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16681367831462470102ULL;
unsigned char var_2 = (unsigned char)238;
unsigned short var_3 = (unsigned short)60001;
unsigned char var_4 = (unsigned char)74;
short var_10 = (short)-5398;
unsigned char var_11 = (unsigned char)167;
int zero = 0;
signed char var_12 = (signed char)74;
unsigned int var_13 = 237604208U;
unsigned long long int var_14 = 3806811583874142830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
