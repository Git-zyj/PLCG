#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55595;
unsigned long long int var_2 = 13335794888495352899ULL;
unsigned int var_3 = 1120320073U;
int var_9 = 1882447430;
unsigned int var_10 = 1513779302U;
unsigned char var_11 = (unsigned char)179;
unsigned long long int var_12 = 15963800064225877319ULL;
unsigned char var_14 = (unsigned char)117;
int zero = 0;
signed char var_15 = (signed char)-44;
unsigned short var_16 = (unsigned short)19987;
long long int var_17 = -8395796257610462932LL;
short var_18 = (short)20150;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13425861783978775358ULL;
unsigned long long int var_21 = 15459456657802306074ULL;
long long int var_22 = 1323643825255521259LL;
signed char var_23 = (signed char)-101;
_Bool var_24 = (_Bool)1;
long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned long long int arr_3 [14] ;
_Bool arr_4 [14] [14] ;
signed char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 92303330467534304LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)31208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 167864668323368902ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)90;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
