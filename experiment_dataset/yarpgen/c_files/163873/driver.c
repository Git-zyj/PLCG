#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
short var_3 = (short)22392;
signed char var_4 = (signed char)-84;
short var_6 = (short)12861;
short var_7 = (short)5738;
signed char var_9 = (signed char)-27;
short var_10 = (short)-6753;
unsigned long long int var_12 = 3141316232456632618ULL;
unsigned long long int var_13 = 6207024813933199238ULL;
signed char var_14 = (signed char)95;
signed char var_15 = (signed char)-85;
int zero = 0;
unsigned long long int var_16 = 4464296809515341212ULL;
unsigned long long int var_17 = 17567580259678562971ULL;
unsigned long long int var_18 = 3865397210816970088ULL;
short var_19 = (short)8200;
signed char var_20 = (signed char)26;
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
