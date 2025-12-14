#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7938320716712841421ULL;
short var_1 = (short)15678;
unsigned long long int var_2 = 4046358320332123294ULL;
signed char var_3 = (signed char)54;
unsigned int var_4 = 1434008241U;
unsigned char var_5 = (unsigned char)152;
unsigned int var_6 = 4138688521U;
unsigned long long int var_7 = 13277579862191160532ULL;
int var_8 = 771653523;
signed char var_9 = (signed char)48;
short var_11 = (short)-25901;
unsigned short var_12 = (unsigned short)53813;
short var_13 = (short)7266;
short var_14 = (short)-23924;
unsigned char var_16 = (unsigned char)62;
short var_17 = (short)31428;
signed char var_18 = (signed char)91;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 16990510939459020423ULL;
unsigned int var_21 = 2318298499U;
unsigned short var_22 = (unsigned short)29446;
int var_23 = -772445718;
unsigned char var_24 = (unsigned char)155;
unsigned long long int var_25 = 4183208868286947611ULL;
int var_26 = 1894241264;
unsigned long long int var_27 = 16448309150066671284ULL;
signed char var_28 = (signed char)40;
short var_29 = (short)21023;
short var_30 = (short)10399;
long long int var_31 = 1900710604665262378LL;
long long int var_32 = 6777117810729089766LL;
long long int var_33 = -4239202402127097515LL;
unsigned char var_34 = (unsigned char)72;
signed char var_35 = (signed char)-35;
unsigned long long int var_36 = 6780164409121900479ULL;
unsigned long long int var_37 = 5809474377560855031ULL;
unsigned long long int var_38 = 2156377671799086327ULL;
short var_39 = (short)-25785;
signed char var_40 = (signed char)-23;
unsigned long long int var_41 = 9533585517005431069ULL;
unsigned long long int var_42 = 8816297960222295641ULL;
long long int var_43 = -1292462242008305577LL;
long long int var_44 = -6987354016722948337LL;
short var_45 = (short)-23120;
_Bool arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
unsigned int arr_5 [16] [16] ;
unsigned char arr_6 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned char arr_9 [16] [16] [16] ;
signed char arr_11 [16] [16] [16] ;
int arr_12 [16] [16] ;
int arr_13 [16] [16] [16] [16] ;
long long int arr_17 [16] [16] [16] [16] ;
unsigned short arr_20 [16] [16] ;
int arr_21 [16] [16] [16] [16] ;
int arr_25 [16] [16] ;
long long int arr_35 [16] [16] [16] [16] ;
unsigned char arr_37 [16] ;
unsigned short arr_40 [16] [16] ;
unsigned long long int arr_4 [10] [10] [10] ;
unsigned int arr_7 [16] ;
long long int arr_10 [16] [16] ;
unsigned char arr_15 [16] ;
unsigned long long int arr_27 [16] [16] [16] ;
short arr_45 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1907093544U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 14200264273808330345ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = -1063749057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 119266188;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1032351668393974394LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)64848;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1072873244 : -2070330974;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = -267722011;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 2380992309882161252LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (unsigned char)182 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)52948;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17213747829745863413ULL : 2064427963656952853ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 2759860798U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = -2042989584437261497LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 15807069433349112994ULL : 17110686184476762216ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (short)21450;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
