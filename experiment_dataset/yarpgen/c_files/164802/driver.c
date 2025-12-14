#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14531;
signed char var_1 = (signed char)-115;
unsigned char var_2 = (unsigned char)132;
unsigned char var_3 = (unsigned char)213;
long long int var_4 = 1440265014243388238LL;
unsigned long long int var_6 = 14456556977517688242ULL;
int var_7 = 834717506;
unsigned long long int var_8 = 18414612581494811546ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2779534415854783248LL;
unsigned char var_11 = (unsigned char)3;
unsigned int var_12 = 3415449249U;
unsigned char var_13 = (unsigned char)194;
unsigned char var_14 = (unsigned char)173;
unsigned char var_16 = (unsigned char)68;
int zero = 0;
unsigned long long int var_17 = 17019918738643388607ULL;
int var_18 = -1406955914;
unsigned long long int var_19 = 3998241127242063903ULL;
long long int var_20 = 1587799851701664298LL;
unsigned char var_21 = (unsigned char)42;
signed char var_22 = (signed char)-32;
unsigned char var_23 = (unsigned char)203;
unsigned short var_24 = (unsigned short)59709;
_Bool var_25 = (_Bool)1;
int var_26 = 1154776229;
unsigned char var_27 = (unsigned char)220;
int var_28 = 938402535;
unsigned long long int var_29 = 3516771923947676154ULL;
unsigned int var_30 = 3120124795U;
int var_31 = 426664743;
unsigned long long int var_32 = 9932227901951263032ULL;
unsigned short var_33 = (unsigned short)43851;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)63;
unsigned char var_37 = (unsigned char)240;
unsigned int var_38 = 1027973483U;
int var_39 = 945401984;
unsigned short var_40 = (unsigned short)4348;
unsigned char var_41 = (unsigned char)12;
unsigned int var_42 = 1359717845U;
unsigned char var_43 = (unsigned char)95;
long long int var_44 = -2124086891794301053LL;
long long int var_45 = 8765658537360525576LL;
_Bool var_46 = (_Bool)1;
long long int var_47 = -6512350386971129537LL;
long long int var_48 = 9142224288198457483LL;
long long int var_49 = -7141433093427108368LL;
_Bool var_50 = (_Bool)0;
unsigned char arr_0 [13] ;
short arr_2 [13] [13] ;
int arr_3 [11] [11] ;
signed char arr_4 [11] ;
unsigned long long int arr_8 [14] ;
unsigned char arr_9 [14] ;
unsigned long long int arr_10 [14] ;
unsigned long long int arr_12 [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] ;
long long int arr_14 [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] ;
unsigned short arr_16 [14] ;
short arr_19 [14] [14] [14] [14] [14] [14] [14] ;
unsigned char arr_20 [14] [14] [14] ;
unsigned short arr_22 [10] [10] ;
long long int arr_24 [10] [10] ;
_Bool arr_25 [10] ;
int arr_28 [10] ;
unsigned long long int arr_29 [10] ;
unsigned long long int arr_30 [10] ;
unsigned int arr_36 [10] [10] ;
long long int arr_38 [10] [10] ;
unsigned char arr_41 [10] [10] [10] ;
long long int arr_42 [10] ;
signed char arr_49 [10] [10] ;
short arr_58 [22] [22] ;
int arr_59 [22] [22] ;
unsigned int arr_60 [15] ;
signed char arr_61 [15] [15] ;
unsigned long long int arr_7 [11] ;
_Bool arr_18 [14] [14] ;
unsigned long long int arr_23 [10] ;
unsigned int arr_26 [10] [10] [10] ;
unsigned long long int arr_32 [10] ;
int arr_46 [10] [10] [10] ;
int arr_51 [10] [10] [10] [10] ;
int arr_52 [10] [10] ;
unsigned long long int arr_55 [10] [10] [10] ;
unsigned int arr_56 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-18996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -317940019;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 6050174516367845893ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 10403783402088099687ULL : 18370871126445272204ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8346268087361145378ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = -5258588097085872212LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 11649583233115809418ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)40889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)25474;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)53771 : (unsigned short)18751;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = 8229737704349429625LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = 1120345;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 2626295359265414922ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = 2202696251364521016ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 1126079970U : 865767913U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = -5716152383862427119LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)156 : (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 5445305594069170634LL : 279649783993586959LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_49 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_58 [i_0] [i_1] = (short)13522;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_59 [i_0] [i_1] = -1885994733;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_60 [i_0] = 746321278U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_61 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 18283844788358245295ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 1036492271963551748ULL : 6500245934672855547ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2040122U : 4250189027U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 9054677417427579371ULL : 17662830542646760097ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 100378215 : 2145665950;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1263411259 : -421262283;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_52 [i_0] [i_1] = (i_0 % 2 == 0) ? 1932998281 : -213943477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5173824269254087151ULL : 12298503162943550151ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? 1269170947U : 2579778152U;
}

void checksum() {
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
