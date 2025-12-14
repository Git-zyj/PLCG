#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8721193368824142395ULL;
signed char var_8 = (signed char)52;
signed char var_10 = (signed char)78;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-64;
int var_18 = -1352097852;
unsigned long long int var_19 = 3102544211680520858ULL;
short var_20 = (short)-7377;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)199;
}

void checksum() {
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
