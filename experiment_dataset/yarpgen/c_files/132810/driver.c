#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 955189761U;
long long int var_1 = 1934134847859702990LL;
short var_2 = (short)3493;
unsigned char var_3 = (unsigned char)29;
unsigned long long int var_4 = 1865422530562691096ULL;
unsigned long long int var_5 = 1428414701639651060ULL;
long long int var_6 = -1790938445897434547LL;
unsigned short var_7 = (unsigned short)28700;
int var_8 = -97169962;
unsigned long long int var_9 = 9233069415260016755ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)63;
unsigned long long int var_12 = 6662549609083593533ULL;
unsigned long long int var_13 = 10171038512411403224ULL;
signed char var_14 = (signed char)9;
int zero = 0;
unsigned long long int var_16 = 2832211863514061956ULL;
unsigned long long int var_17 = 13130225250304143947ULL;
unsigned char var_18 = (unsigned char)61;
unsigned long long int var_19 = 6356301520814952652ULL;
int var_20 = -146885568;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 8683598U;
unsigned long long int var_23 = 7993952187873575875ULL;
unsigned long long int var_24 = 3295427529632769226ULL;
unsigned short var_25 = (unsigned short)7918;
unsigned long long int var_26 = 3917119277906822209ULL;
unsigned long long int var_27 = 10373619549819904374ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned short arr_1 [15] [15] ;
unsigned short arr_4 [15] ;
short arr_5 [15] ;
_Bool arr_7 [15] [15] [15] ;
_Bool arr_8 [15] ;
unsigned char arr_11 [11] ;
unsigned int arr_12 [11] ;
unsigned int arr_13 [11] ;
_Bool arr_14 [11] ;
short arr_17 [11] ;
unsigned long long int arr_18 [11] [11] ;
unsigned long long int arr_2 [15] [15] ;
unsigned short arr_3 [15] [15] ;
unsigned int arr_6 [15] ;
signed char arr_9 [15] ;
long long int arr_10 [15] ;
int arr_15 [11] ;
unsigned long long int arr_16 [11] [11] ;
signed char arr_19 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 6170353108764264576ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)51167;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16780 : (unsigned short)8359;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)17769;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 1784271059U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 898816261U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (short)-23040;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 17801970791084443994ULL : 13830545071903521395ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 5412718955352406588ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)40183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4190487061U : 1076301211U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)58 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -6495316476082134374LL : -4114431845011789702LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -736623152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = 15476429157158608840ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-125 : (signed char)45;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
