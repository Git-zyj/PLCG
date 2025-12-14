#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1639767994U;
unsigned char var_3 = (unsigned char)85;
unsigned short var_4 = (unsigned short)16480;
unsigned long long int var_7 = 1203322835373864378ULL;
unsigned short var_8 = (unsigned short)55751;
unsigned int var_9 = 3771584797U;
unsigned char var_12 = (unsigned char)179;
unsigned char var_17 = (unsigned char)211;
int zero = 0;
long long int var_18 = -3464950380753226451LL;
unsigned char var_19 = (unsigned char)73;
short var_20 = (short)26946;
int var_21 = 68265162;
unsigned int arr_4 [21] ;
long long int arr_5 [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3538431727U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4737457467625070063LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)22;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
