#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9154;
_Bool var_2 = (_Bool)1;
int var_3 = 1571689020;
unsigned char var_4 = (unsigned char)156;
signed char var_6 = (signed char)-97;
short var_7 = (short)17173;
unsigned long long int var_8 = 15578361108033794764ULL;
signed char var_10 = (signed char)78;
int zero = 0;
unsigned short var_11 = (unsigned short)42354;
unsigned short var_12 = (unsigned short)3551;
signed char var_13 = (signed char)120;
void init() {
}

void checksum() {
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
