#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 514413300;
signed char var_1 = (signed char)98;
long long int var_2 = 2043809390560398296LL;
unsigned int var_4 = 4001319678U;
unsigned int var_5 = 339401680U;
unsigned int var_6 = 2090936247U;
unsigned char var_8 = (unsigned char)223;
unsigned long long int var_9 = 1860923683903559448ULL;
signed char var_10 = (signed char)19;
signed char var_11 = (signed char)26;
unsigned char var_12 = (unsigned char)239;
long long int var_13 = 5064527885780220384LL;
unsigned int var_14 = 2093972786U;
long long int var_15 = -1830437509105093800LL;
signed char var_16 = (signed char)120;
int zero = 0;
long long int var_17 = 4239206306250124763LL;
unsigned int var_18 = 4150845281U;
long long int var_19 = 7245554386782611575LL;
unsigned char var_20 = (unsigned char)79;
int var_21 = 81494833;
unsigned int var_22 = 2062645752U;
unsigned short var_23 = (unsigned short)54865;
unsigned char var_24 = (unsigned char)4;
signed char var_25 = (signed char)-98;
unsigned int var_26 = 3461856645U;
unsigned short var_27 = (unsigned short)36193;
unsigned int var_28 = 2583692998U;
signed char var_29 = (signed char)10;
signed char var_30 = (signed char)44;
unsigned long long int var_31 = 13034187832993998333ULL;
unsigned char var_32 = (unsigned char)195;
unsigned int var_33 = 2018133650U;
unsigned int var_34 = 1381324578U;
unsigned int var_35 = 45985471U;
int var_36 = -2081485702;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 4352697814092417463ULL;
unsigned int var_39 = 105481488U;
long long int var_40 = 3006037982020085057LL;
unsigned int var_41 = 2614481940U;
unsigned int var_42 = 2582017504U;
unsigned int var_43 = 1594309004U;
long long int var_44 = 5534682365858295367LL;
unsigned short var_45 = (unsigned short)52020;
unsigned int var_46 = 69633162U;
signed char var_47 = (signed char)1;
unsigned int var_48 = 2605419136U;
unsigned short var_49 = (unsigned short)19373;
signed char arr_0 [14] ;
short arr_1 [14] ;
signed char arr_3 [14] [14] ;
signed char arr_5 [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] [14] [14] [14] ;
_Bool arr_7 [14] [14] [14] [14] ;
unsigned long long int arr_8 [14] [14] [14] [14] [14] [14] [14] ;
short arr_10 [14] [14] ;
unsigned long long int arr_14 [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] [14] ;
signed char arr_18 [14] [14] [14] [14] [14] ;
unsigned int arr_19 [14] [14] [14] ;
_Bool arr_20 [14] [14] [14] [14] [14] [14] [14] ;
unsigned int arr_23 [14] [14] [14] ;
long long int arr_26 [14] [14] ;
long long int arr_40 [14] ;
int arr_56 [18] ;
unsigned int arr_12 [14] [14] [14] ;
signed char arr_13 [14] ;
unsigned short arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_32 [14] [14] [14] ;
signed char arr_35 [14] ;
signed char arr_49 [14] [14] [14] [14] ;
signed char arr_54 [14] ;
signed char arr_57 [18] ;
unsigned int arr_58 [18] ;
signed char arr_59 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)9136;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6508124082526476981ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-25251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 4031436929739098942ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 564834926U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3588559130U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1936856560U : 3520015292U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = -1200568442744304060LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = -5100700233303908022LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_56 [i_0] = -1376721767;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3062358899U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)56340;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3198315034561130545ULL : 5425204314725848765ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-100 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_54 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_57 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = 3550652710U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_59 [i_0] = (signed char)68;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
