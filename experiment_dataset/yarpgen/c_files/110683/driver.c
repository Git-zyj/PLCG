#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4088096198U;
short var_1 = (short)8631;
int var_2 = 323176062;
signed char var_4 = (signed char)-43;
unsigned char var_5 = (unsigned char)158;
signed char var_6 = (signed char)84;
unsigned short var_7 = (unsigned short)11929;
unsigned long long int var_8 = 17482080594032384701ULL;
long long int var_9 = -6606521265505103461LL;
signed char var_10 = (signed char)125;
int var_11 = 1412221756;
long long int var_12 = -5261183713346884545LL;
unsigned long long int var_13 = 5482588064354288054ULL;
unsigned int var_14 = 3223942905U;
int var_15 = 756830658;
unsigned char var_16 = (unsigned char)39;
unsigned long long int var_17 = 613301818718572704ULL;
unsigned char var_18 = (unsigned char)248;
int zero = 0;
unsigned long long int var_19 = 12424104204233568286ULL;
short var_20 = (short)-7600;
int var_21 = 1546103509;
int var_22 = -25851545;
unsigned long long int var_23 = 12159828155605800069ULL;
unsigned long long int var_24 = 13503741937518133799ULL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1703796169U;
short var_27 = (short)-10368;
long long int var_28 = -8188062533844123659LL;
unsigned char var_29 = (unsigned char)79;
unsigned long long int var_30 = 892780822284217892ULL;
unsigned char var_31 = (unsigned char)11;
unsigned int var_32 = 2312555089U;
unsigned int var_33 = 3357045036U;
short var_34 = (short)-6704;
short var_35 = (short)25206;
unsigned short var_36 = (unsigned short)28786;
long long int var_37 = 4046457865554979517LL;
unsigned char var_38 = (unsigned char)51;
signed char var_39 = (signed char)102;
unsigned short var_40 = (unsigned short)56956;
short var_41 = (short)-31919;
unsigned int var_42 = 1261629166U;
short var_43 = (short)22172;
signed char var_44 = (signed char)84;
unsigned long long int var_45 = 8730468708288229860ULL;
long long int var_46 = -8968650151310504702LL;
unsigned long long int var_47 = 7606727068738243467ULL;
short var_48 = (short)-16904;
long long int var_49 = -5078508709390296421LL;
short var_50 = (short)-30152;
signed char var_51 = (signed char)13;
short var_52 = (short)-12998;
_Bool var_53 = (_Bool)1;
unsigned short var_54 = (unsigned short)56063;
signed char var_55 = (signed char)102;
unsigned long long int var_56 = 7113354638646316650ULL;
long long int var_57 = -6346597441384020043LL;
unsigned char var_58 = (unsigned char)152;
unsigned int var_59 = 2166563758U;
unsigned long long int var_60 = 17869392799072061632ULL;
unsigned char arr_0 [15] [15] ;
long long int arr_1 [15] [15] ;
unsigned short arr_2 [15] [15] ;
int arr_3 [15] ;
short arr_4 [15] ;
unsigned short arr_5 [15] ;
unsigned long long int arr_8 [15] ;
unsigned char arr_9 [15] [15] [15] [15] ;
int arr_14 [15] ;
short arr_15 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_20 [15] [15] [15] [15] [15] [15] [15] ;
short arr_22 [15] [15] [15] ;
int arr_23 [15] [15] [15] [15] [15] ;
signed char arr_29 [15] [15] [15] [15] [15] [15] ;
signed char arr_34 [15] [15] ;
unsigned int arr_54 [15] [15] [15] ;
short arr_12 [15] [15] [15] ;
unsigned long long int arr_28 [15] [15] ;
int arr_39 [15] [15] [15] ;
long long int arr_42 [15] ;
signed char arr_50 [15] [15] ;
short arr_61 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -4110440785804800409LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47634 : (unsigned short)4873;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1888332441;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-19452 : (short)-24407;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43442 : (unsigned short)38585;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 12816096614991466805ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -277097133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)24494;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)15186;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 1178520789;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)75 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 2707702072U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)21980 : (short)-28671;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 14824728241395037917ULL : 13567317767038550224ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1355512235 : 1106600917;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 2748583129061189055LL : 952092996682735888LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_50 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-114 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)12238 : (short)-2142;
}

void checksum() {
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
