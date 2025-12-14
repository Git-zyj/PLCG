#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16907;
int var_2 = 990158836;
unsigned char var_3 = (unsigned char)61;
unsigned short var_7 = (unsigned short)18317;
unsigned long long int var_10 = 14658219974963714670ULL;
unsigned int var_11 = 428273457U;
int zero = 0;
signed char var_12 = (signed char)45;
unsigned short var_13 = (unsigned short)47387;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
