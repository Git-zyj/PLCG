#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6624698270897084950LL;
long long int var_1 = 517992075262731668LL;
signed char var_2 = (signed char)-104;
signed char var_4 = (signed char)-105;
short var_5 = (short)12284;
unsigned short var_7 = (unsigned short)39977;
short var_8 = (short)-595;
long long int var_10 = 3500271601680647903LL;
unsigned char var_12 = (unsigned char)2;
unsigned short var_16 = (unsigned short)60024;
int var_17 = -738447037;
int var_18 = -474142267;
int zero = 0;
signed char var_19 = (signed char)62;
short var_20 = (short)28509;
signed char var_21 = (signed char)-90;
short var_22 = (short)-5859;
long long int var_23 = -1258716614568787106LL;
long long int arr_2 [23] [23] ;
unsigned char arr_5 [23] [23] ;
long long int arr_12 [23] [23] [23] [23] ;
_Bool arr_16 [23] [23] [23] ;
unsigned char arr_19 [23] [23] [23] [23] ;
long long int arr_7 [23] ;
signed char arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -6537610673131883309LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -4195267539493900987LL : -7747360845264826789LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 4221285209378170554LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)-60;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
