#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55319;
unsigned int var_3 = 1580757572U;
signed char var_4 = (signed char)-57;
unsigned short var_7 = (unsigned short)61465;
int zero = 0;
unsigned int var_13 = 754548979U;
signed char var_14 = (signed char)23;
signed char var_15 = (signed char)-45;
int var_16 = 1422293792;
unsigned short var_17 = (unsigned short)40783;
unsigned short var_18 = (unsigned short)11941;
unsigned char arr_0 [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
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
