#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30304;
short var_1 = (short)-27576;
unsigned int var_4 = 1489063081U;
short var_5 = (short)-5923;
short var_6 = (short)-10451;
signed char var_9 = (signed char)-103;
unsigned long long int var_10 = 3156863098773279673ULL;
unsigned int var_11 = 1199919745U;
long long int var_12 = -1769406856226238611LL;
unsigned long long int var_13 = 7646044985595610396ULL;
unsigned short var_14 = (unsigned short)15763;
short var_15 = (short)22886;
int var_18 = 350298553;
int zero = 0;
unsigned short var_19 = (unsigned short)4782;
unsigned long long int var_20 = 9396209438710317488ULL;
unsigned char var_21 = (unsigned char)248;
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
