#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
unsigned int var_1 = 200791401U;
signed char var_2 = (signed char)6;
unsigned short var_3 = (unsigned short)24257;
short var_4 = (short)-14529;
unsigned char var_5 = (unsigned char)47;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6202690619755124357ULL;
unsigned long long int var_8 = 7862840119834742062ULL;
unsigned long long int var_9 = 11104579579456719567ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)51;
unsigned int var_12 = 1604890141U;
unsigned short var_13 = (unsigned short)17335;
unsigned long long int var_14 = 5516952123588384488ULL;
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
