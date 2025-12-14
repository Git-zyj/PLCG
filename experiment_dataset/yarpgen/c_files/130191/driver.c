#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
int var_2 = -73536057;
signed char var_3 = (signed char)-54;
short var_4 = (short)-1303;
unsigned short var_5 = (unsigned short)61945;
int zero = 0;
unsigned short var_10 = (unsigned short)14640;
unsigned short var_11 = (unsigned short)17165;
unsigned int var_12 = 1950574465U;
long long int var_13 = -1948710963178395997LL;
unsigned long long int var_14 = 13703230071520036849ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
