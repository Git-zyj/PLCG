#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1289551962U;
unsigned char var_2 = (unsigned char)205;
int var_5 = -936051885;
unsigned long long int var_6 = 9518476722057396259ULL;
unsigned int var_7 = 588655461U;
unsigned char var_8 = (unsigned char)197;
signed char var_9 = (signed char)-117;
signed char var_10 = (signed char)-80;
signed char var_12 = (signed char)-37;
int var_14 = 349137710;
int zero = 0;
unsigned short var_15 = (unsigned short)23046;
int var_16 = 828677092;
void init() {
}

void checksum() {
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
