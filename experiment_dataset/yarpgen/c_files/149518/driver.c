#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26754;
int var_3 = -1333218982;
short var_6 = (short)2562;
unsigned long long int var_7 = 4273124911914360684ULL;
long long int var_8 = 3618810018453992775LL;
unsigned char var_12 = (unsigned char)172;
short var_15 = (short)-3092;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
unsigned short var_18 = (unsigned short)21464;
long long int var_19 = -4336655330410957577LL;
int var_20 = -926193761;
short var_21 = (short)-27332;
unsigned long long int var_22 = 5453022627191014795ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
