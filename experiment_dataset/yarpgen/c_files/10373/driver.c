#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)540;
signed char var_2 = (signed char)85;
unsigned long long int var_4 = 5444029508128517286ULL;
short var_5 = (short)14344;
long long int var_6 = -7399008113111310417LL;
signed char var_7 = (signed char)-40;
short var_8 = (short)-15601;
long long int var_9 = 1757603499199174272LL;
unsigned char var_10 = (unsigned char)221;
short var_11 = (short)26092;
unsigned int var_13 = 1199103656U;
int zero = 0;
unsigned short var_14 = (unsigned short)46856;
unsigned long long int var_15 = 2827564056567513787ULL;
short var_16 = (short)12139;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
