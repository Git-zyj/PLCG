#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
int var_4 = 1221576911;
signed char var_5 = (signed char)-29;
unsigned long long int var_7 = 13373950410139834647ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned char var_12 = (unsigned char)53;
unsigned short var_13 = (unsigned short)55306;
long long int var_14 = -7185350107801277911LL;
short var_15 = (short)26142;
unsigned char var_16 = (unsigned char)216;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
