#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1178458133;
long long int var_3 = 4302609286258278524LL;
long long int var_5 = -8140444080654507861LL;
int var_10 = -1071978632;
signed char var_11 = (signed char)-40;
signed char var_12 = (signed char)-122;
unsigned short var_13 = (unsigned short)61504;
signed char var_16 = (signed char)-82;
int zero = 0;
unsigned short var_17 = (unsigned short)11295;
long long int var_18 = -7203353793778373001LL;
short var_19 = (short)-8778;
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
