#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -704466391;
signed char var_4 = (signed char)20;
int var_6 = -491214272;
unsigned long long int var_7 = 2272140567600195493ULL;
short var_8 = (short)-15101;
int var_10 = 436224713;
unsigned short var_11 = (unsigned short)31702;
unsigned long long int var_12 = 9025417443474098718ULL;
unsigned long long int var_15 = 16919660407547352146ULL;
unsigned char var_16 = (unsigned char)133;
unsigned char var_17 = (unsigned char)147;
unsigned long long int var_18 = 13397882735749597763ULL;
int zero = 0;
int var_19 = 1070550066;
unsigned long long int var_20 = 17357720617774967731ULL;
int var_21 = 1981829951;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
