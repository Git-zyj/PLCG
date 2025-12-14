#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4014496754680209722LL;
unsigned char var_8 = (unsigned char)200;
unsigned long long int var_17 = 14510863238432370912ULL;
int zero = 0;
signed char var_19 = (signed char)-2;
unsigned char var_20 = (unsigned char)184;
unsigned char var_21 = (unsigned char)138;
short var_22 = (short)-5532;
long long int var_23 = 8116943683650806133LL;
unsigned short var_24 = (unsigned short)24754;
unsigned short arr_0 [18] [18] ;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47914;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-18512;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
