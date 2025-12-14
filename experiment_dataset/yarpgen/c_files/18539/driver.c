#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20258;
unsigned char var_4 = (unsigned char)12;
unsigned char var_5 = (unsigned char)195;
signed char var_6 = (signed char)16;
long long int var_8 = 5127706432593641986LL;
int var_9 = -1666770585;
int var_10 = -1925685339;
unsigned long long int var_11 = 16854066246072928976ULL;
long long int var_12 = 5348610485722923759LL;
signed char var_13 = (signed char)-55;
int zero = 0;
long long int var_14 = 5807632808781606115LL;
unsigned char var_15 = (unsigned char)39;
unsigned int var_16 = 3684699970U;
int var_17 = 326080072;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
