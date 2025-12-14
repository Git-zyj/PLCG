#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned char var_2 = (unsigned char)161;
unsigned char var_4 = (unsigned char)52;
unsigned short var_6 = (unsigned short)18774;
long long int var_7 = -3623202798915682802LL;
short var_8 = (short)11123;
int var_11 = -2107769680;
int zero = 0;
unsigned short var_12 = (unsigned short)56890;
long long int var_13 = 1469205344793796129LL;
unsigned short var_14 = (unsigned short)62517;
short var_15 = (short)-31069;
int var_16 = -1654017931;
long long int var_17 = 2075063439631766437LL;
unsigned short var_18 = (unsigned short)41998;
long long int var_19 = 1025005733034412292LL;
unsigned int var_20 = 3915184031U;
long long int arr_0 [24] ;
_Bool arr_2 [24] ;
unsigned char arr_3 [25] ;
short arr_5 [25] ;
signed char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2094335647132563210LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)20033;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)77;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
