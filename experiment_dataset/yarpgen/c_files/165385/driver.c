#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10899228657300548497ULL;
int var_2 = 869585715;
long long int var_3 = -3397544218710635425LL;
unsigned short var_5 = (unsigned short)17035;
signed char var_7 = (signed char)-125;
short var_8 = (short)-6166;
int var_9 = 337133589;
int var_11 = 723617125;
unsigned char var_14 = (unsigned char)38;
unsigned char var_15 = (unsigned char)249;
long long int var_19 = 8352736336011351532LL;
int zero = 0;
int var_20 = 1854476212;
unsigned int var_21 = 2870352271U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
