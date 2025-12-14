#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49824;
unsigned int var_2 = 3285139759U;
unsigned char var_3 = (unsigned char)178;
int var_5 = 839549796;
unsigned long long int var_6 = 10123663314348822396ULL;
unsigned long long int var_10 = 1786426353986255371ULL;
int var_11 = 79061085;
int zero = 0;
unsigned char var_12 = (unsigned char)204;
unsigned char var_13 = (unsigned char)220;
signed char var_14 = (signed char)7;
unsigned long long int var_15 = 765643050206949737ULL;
unsigned int var_16 = 1218546356U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
