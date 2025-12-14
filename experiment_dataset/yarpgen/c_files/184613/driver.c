#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)34;
unsigned char var_5 = (unsigned char)210;
unsigned char var_6 = (unsigned char)183;
long long int var_10 = -4389717282663449121LL;
short var_12 = (short)-14367;
long long int var_13 = 814710882581773086LL;
unsigned char var_14 = (unsigned char)152;
unsigned long long int var_16 = 6846367840298370199ULL;
int zero = 0;
short var_18 = (short)-11558;
unsigned short var_19 = (unsigned short)49822;
unsigned long long int var_20 = 4965197366312277832ULL;
long long int var_21 = -5928743518699356183LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
