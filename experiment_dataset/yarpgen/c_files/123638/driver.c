#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1171386157;
unsigned char var_3 = (unsigned char)158;
unsigned int var_6 = 1464672149U;
signed char var_9 = (signed char)-96;
int zero = 0;
unsigned long long int var_11 = 6250349098196237043ULL;
unsigned short var_12 = (unsigned short)41673;
int var_13 = -1882985698;
unsigned char var_14 = (unsigned char)234;
void init() {
}

void checksum() {
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
