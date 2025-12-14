#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
int var_1 = 1991240488;
int var_2 = 2130465797;
unsigned long long int var_3 = 8631223879175784380ULL;
unsigned long long int var_4 = 4319188510694827713ULL;
short var_5 = (short)18311;
unsigned short var_6 = (unsigned short)58777;
signed char var_7 = (signed char)99;
long long int var_8 = -7404766430020631544LL;
unsigned short var_9 = (unsigned short)61386;
unsigned short var_10 = (unsigned short)9995;
unsigned long long int var_11 = 10931063606961552839ULL;
short var_12 = (short)-32467;
long long int var_13 = -4844186089031339203LL;
unsigned int var_14 = 1319144823U;
int var_15 = 1734855954;
unsigned long long int var_16 = 210899460820007290ULL;
unsigned long long int var_17 = 15853609739324360168ULL;
unsigned short var_18 = (unsigned short)33769;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7269794271307720869ULL;
unsigned int var_21 = 1435744852U;
unsigned char var_22 = (unsigned char)218;
unsigned char var_23 = (unsigned char)246;
unsigned short var_24 = (unsigned short)52467;
_Bool var_25 = (_Bool)0;
unsigned int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned short arr_2 [22] ;
short arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
unsigned short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 654537242U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)43561;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1491;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1394071626572269173ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)38340;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
