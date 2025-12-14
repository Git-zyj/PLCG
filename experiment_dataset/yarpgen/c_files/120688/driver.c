#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2558531468292408799LL;
short var_3 = (short)-27168;
unsigned char var_4 = (unsigned char)140;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1354188958U;
unsigned long long int var_7 = 10434311890045326209ULL;
long long int var_8 = 2927198488070769424LL;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
signed char var_10 = (signed char)-8;
unsigned char var_11 = (unsigned char)192;
unsigned long long int var_12 = 4546042196687005785ULL;
signed char var_13 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
