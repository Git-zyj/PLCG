#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -634657059;
unsigned short var_1 = (unsigned short)7252;
unsigned short var_6 = (unsigned short)46565;
int var_7 = -1964855828;
long long int var_13 = 6695582118303501607LL;
unsigned char var_14 = (unsigned char)70;
int zero = 0;
unsigned long long int var_17 = 16519933474089880731ULL;
unsigned int var_18 = 38531099U;
unsigned short var_19 = (unsigned short)62750;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
