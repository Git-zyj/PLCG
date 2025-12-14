#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2521615309U;
signed char var_2 = (signed char)-43;
short var_3 = (short)-22984;
unsigned short var_4 = (unsigned short)17462;
signed char var_5 = (signed char)89;
unsigned long long int var_6 = 6762294800339834146ULL;
unsigned long long int var_7 = 14173883953993943485ULL;
unsigned short var_8 = (unsigned short)61514;
short var_9 = (short)18218;
int var_10 = -1421207031;
int zero = 0;
int var_11 = -2084247286;
long long int var_12 = 6641655567276756924LL;
signed char var_13 = (signed char)97;
short var_14 = (short)4076;
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
