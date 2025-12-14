#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned char var_4 = (unsigned char)142;
unsigned short var_5 = (unsigned short)60659;
unsigned short var_7 = (unsigned short)56016;
unsigned long long int var_8 = 6933810639003443306ULL;
short var_11 = (short)-19217;
unsigned short var_14 = (unsigned short)6471;
unsigned long long int var_15 = 15949923986426693889ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)8094;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
