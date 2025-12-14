#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 245179895431769646LL;
unsigned short var_3 = (unsigned short)45412;
unsigned short var_4 = (unsigned short)53255;
unsigned char var_7 = (unsigned char)221;
unsigned long long int var_12 = 11270396413306352499ULL;
unsigned char var_13 = (unsigned char)38;
int zero = 0;
short var_14 = (short)-14022;
signed char var_15 = (signed char)-81;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
