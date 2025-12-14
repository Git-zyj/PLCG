#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
unsigned long long int var_2 = 17565590403787622903ULL;
signed char var_3 = (signed char)7;
signed char var_5 = (signed char)-85;
unsigned char var_6 = (unsigned char)235;
unsigned char var_7 = (unsigned char)241;
int zero = 0;
unsigned long long int var_12 = 11832245832571393217ULL;
short var_13 = (short)-29818;
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
