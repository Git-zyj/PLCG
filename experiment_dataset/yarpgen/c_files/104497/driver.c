#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1914539764;
int var_1 = 1002440807;
signed char var_2 = (signed char)-63;
long long int var_3 = -4218390940141373324LL;
short var_5 = (short)5390;
int var_6 = 2041289766;
short var_7 = (short)-10666;
int var_9 = 1362818793;
unsigned long long int var_12 = 13687606948469386813ULL;
signed char var_14 = (signed char)68;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 60931268;
int var_18 = -1880221719;
signed char var_19 = (signed char)-74;
unsigned char var_20 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
