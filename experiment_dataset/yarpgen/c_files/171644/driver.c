#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned long long int var_1 = 9669850989151894450ULL;
unsigned char var_2 = (unsigned char)17;
unsigned char var_3 = (unsigned char)181;
unsigned char var_4 = (unsigned char)46;
short var_5 = (short)-16581;
signed char var_7 = (signed char)114;
unsigned int var_8 = 2703868896U;
unsigned long long int var_10 = 8746495863460925251ULL;
int zero = 0;
short var_13 = (short)1507;
signed char var_14 = (signed char)80;
unsigned int var_15 = 2539994235U;
unsigned long long int var_16 = 9236855551138833643ULL;
int var_17 = -1303521917;
short var_18 = (short)29724;
signed char var_19 = (signed char)60;
unsigned int var_20 = 4020143069U;
unsigned short var_21 = (unsigned short)42693;
signed char var_22 = (signed char)40;
_Bool var_23 = (_Bool)0;
int var_24 = 1665016105;
unsigned long long int var_25 = 16848497891110211883ULL;
signed char var_26 = (signed char)119;
signed char var_27 = (signed char)-2;
int arr_0 [21] ;
short arr_1 [21] [21] ;
signed char arr_4 [25] ;
long long int arr_6 [15] ;
short arr_14 [15] [15] [15] [15] [15] ;
unsigned short arr_16 [15] ;
int arr_18 [15] [15] ;
unsigned int arr_19 [15] [15] [15] [15] [15] ;
unsigned char arr_2 [21] ;
unsigned short arr_3 [21] ;
unsigned int arr_13 [15] [15] ;
unsigned char arr_20 [15] [15] [15] [15] [15] ;
unsigned short arr_21 [15] ;
signed char arr_25 [15] ;
unsigned long long int arr_26 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -322157359 : -695101655;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-21343 : (short)-10915;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)21 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1295449383574270305LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)6833 : (short)-25229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (unsigned short)2441;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 1781876109 : 617555430;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 4061590529U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13847 : (unsigned short)38594;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 595046276U : 677400504U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)49 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3031 : (unsigned short)18765;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = 15128604047288431596ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
