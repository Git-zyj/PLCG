#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned char var_2 = (unsigned char)253;
long long int var_3 = -5710229319975800414LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -949299415382814422LL;
unsigned short var_6 = (unsigned short)52746;
unsigned short var_7 = (unsigned short)51752;
unsigned char var_8 = (unsigned char)139;
long long int var_9 = 4928081095351654656LL;
signed char var_10 = (signed char)-21;
unsigned char var_11 = (unsigned char)120;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2297559492U;
int zero = 0;
unsigned int var_14 = 1800326993U;
unsigned char var_15 = (unsigned char)20;
unsigned char var_16 = (unsigned char)218;
unsigned long long int var_17 = 5363791795849645533ULL;
signed char var_18 = (signed char)52;
unsigned short var_19 = (unsigned short)40561;
unsigned short var_20 = (unsigned short)3902;
int var_21 = 1193859428;
unsigned long long int arr_0 [19] ;
signed char arr_4 [17] ;
unsigned long long int arr_5 [17] ;
short arr_11 [20] ;
signed char arr_12 [20] ;
int arr_3 [19] ;
unsigned long long int arr_6 [17] [17] ;
unsigned short arr_7 [17] ;
unsigned char arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8249359790596072012ULL : 17024516175627747864ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 14800297421518708197ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)-8436;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -450929857 : 683436930;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 3465179196110000546ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)19852;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)197;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
