#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1734879976346092034LL;
unsigned long long int var_3 = 704050631935646138ULL;
unsigned int var_4 = 3630585437U;
unsigned int var_6 = 1849069231U;
signed char var_8 = (signed char)92;
signed char var_9 = (signed char)14;
unsigned char var_10 = (unsigned char)246;
unsigned char var_11 = (unsigned char)124;
unsigned int var_12 = 2855519399U;
unsigned int var_13 = 1200456178U;
long long int var_14 = 1938892580715738017LL;
unsigned int var_15 = 1060615080U;
int zero = 0;
unsigned long long int var_16 = 7708377599758841885ULL;
unsigned long long int var_17 = 4018027766291628195ULL;
unsigned int var_18 = 1251936583U;
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
