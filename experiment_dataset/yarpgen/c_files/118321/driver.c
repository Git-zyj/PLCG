#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5831293147588221567LL;
int var_3 = 790373470;
int var_4 = -340406593;
unsigned char var_5 = (unsigned char)201;
unsigned short var_6 = (unsigned short)8515;
unsigned char var_7 = (unsigned char)73;
long long int var_8 = 3654258310125750563LL;
long long int var_9 = 2668569484694126018LL;
unsigned char var_10 = (unsigned char)233;
long long int var_11 = 67686678431808887LL;
int var_12 = -591124759;
unsigned char var_13 = (unsigned char)5;
unsigned long long int var_14 = 13099160002656049649ULL;
unsigned short var_15 = (unsigned short)61584;
unsigned short var_17 = (unsigned short)1930;
int var_18 = 1923847168;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = 663925421;
unsigned short var_22 = (unsigned short)4792;
unsigned int var_23 = 639348568U;
signed char var_24 = (signed char)-79;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 4145574807U;
_Bool var_27 = (_Bool)0;
int var_28 = 188841196;
unsigned short var_29 = (unsigned short)38637;
int var_30 = -511921619;
long long int var_31 = 8252478040562908892LL;
int var_32 = -1496314245;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)47620;
signed char var_35 = (signed char)-34;
unsigned char var_36 = (unsigned char)133;
int var_37 = -726201444;
int var_38 = 1124688168;
long long int var_39 = 8287828554290451657LL;
int var_40 = 1622116193;
int var_41 = -713330628;
int var_42 = 1731138626;
short var_43 = (short)25491;
signed char var_44 = (signed char)-103;
unsigned short var_45 = (unsigned short)46278;
int var_46 = 1801318773;
int var_47 = -1742045875;
signed char var_48 = (signed char)69;
unsigned char var_49 = (unsigned char)106;
long long int var_50 = -5054972428120953864LL;
long long int var_51 = -1981697411804284295LL;
unsigned int var_52 = 1399220685U;
_Bool var_53 = (_Bool)0;
unsigned long long int var_54 = 12492218953679354953ULL;
unsigned short var_55 = (unsigned short)6863;
unsigned char var_56 = (unsigned char)130;
unsigned long long int var_57 = 1007951652952755374ULL;
unsigned char var_58 = (unsigned char)167;
_Bool var_59 = (_Bool)0;
unsigned short var_60 = (unsigned short)33949;
unsigned short var_61 = (unsigned short)50698;
int var_62 = -1926138263;
signed char var_63 = (signed char)-104;
unsigned long long int var_64 = 10963647102980562991ULL;
unsigned int var_65 = 3217394535U;
unsigned char var_66 = (unsigned char)179;
long long int var_67 = -5085608953731055971LL;
unsigned short var_68 = (unsigned short)48409;
short var_69 = (short)29129;
unsigned short var_70 = (unsigned short)19302;
unsigned char arr_0 [13] ;
int arr_2 [13] [13] [13] ;
long long int arr_3 [13] [13] [13] ;
short arr_5 [13] ;
long long int arr_9 [21] ;
_Bool arr_10 [21] [21] ;
long long int arr_17 [12] [12] [12] [12] ;
unsigned int arr_25 [23] ;
unsigned int arr_26 [23] ;
unsigned char arr_27 [23] ;
unsigned char arr_29 [18] [18] ;
unsigned short arr_30 [18] ;
unsigned char arr_31 [18] ;
int arr_36 [12] [12] ;
long long int arr_38 [12] [12] [12] ;
unsigned char arr_40 [12] [12] ;
_Bool arr_48 [21] ;
int arr_52 [15] ;
unsigned short arr_53 [15] ;
long long int arr_54 [15] [15] ;
unsigned char arr_55 [15] ;
long long int arr_60 [15] ;
short arr_68 [15] [15] [15] [15] [15] [15] [15] ;
_Bool arr_72 [15] ;
unsigned char arr_4 [13] ;
int arr_7 [13] ;
unsigned int arr_8 [13] ;
int arr_23 [12] [12] [12] ;
long long int arr_24 [12] [12] ;
unsigned char arr_28 [23] ;
int arr_32 [18] [18] ;
long long int arr_37 [12] [12] ;
int arr_44 [19] ;
int arr_45 [19] ;
signed char arr_57 [15] [15] ;
unsigned int arr_63 [15] [15] [15] ;
_Bool arr_66 [15] ;
long long int arr_67 [15] [15] [15] [15] ;
int arr_71 [15] [15] [15] [15] [15] ;
short arr_75 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1145838005 : 2068802225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2733179773596201766LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)17202 : (short)13018;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -4896656629751138298LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6037053433767274382LL : 4087362362822712441LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 1215309363U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = 318556596U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34633 : (unsigned short)25497;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_36 [i_0] [i_1] = -400591250;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6903564794187260294LL : -7445030708217304659LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 1776066491 : 276100273;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37628 : (unsigned short)61835;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_54 [i_0] [i_1] = -1257979272685731203LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_55 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_60 [i_0] = 234869253739452184LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)20764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_72 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1841692635 : 1253406144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 3395140115U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1275291955 : -1761801102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -3037054915413917692LL : 1570483255203070989LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned char)245 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? -2000081851 : 476628010;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? 6730888767233721159LL : -6186778385440215336LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 2066506974 : -570085340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? -868334852 : 230015431;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_57 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)21 : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4019443324U : 3943224058U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -7055440463755062072LL : -3383795684074622793LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -1188330908 : 1044559910;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? (short)6389 : (short)7582;
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
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_63 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_75 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
