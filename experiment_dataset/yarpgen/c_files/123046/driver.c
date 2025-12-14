#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1286284301354184923LL;
unsigned char var_1 = (unsigned char)45;
unsigned char var_2 = (unsigned char)197;
unsigned long long int var_3 = 16871840313620323621ULL;
int var_6 = 802894364;
short var_7 = (short)7899;
unsigned char var_8 = (unsigned char)121;
int zero = 0;
unsigned long long int var_10 = 6442369157436461466ULL;
signed char var_11 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
