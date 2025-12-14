#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 827827831;
short var_1 = (short)-6444;
unsigned short var_3 = (unsigned short)28187;
signed char var_4 = (signed char)48;
long long int var_6 = 5528285125085846182LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17411589877145259010ULL;
unsigned int var_10 = 1507371833U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5151040923895284381ULL;
short var_15 = (short)14740;
int zero = 0;
unsigned int var_16 = 3142577764U;
unsigned int var_17 = 1340823145U;
unsigned char var_18 = (unsigned char)85;
signed char var_19 = (signed char)-19;
short var_20 = (short)-27673;
unsigned int var_21 = 3636653559U;
unsigned long long int var_22 = 2832397561313449489ULL;
unsigned int var_23 = 2667173017U;
unsigned long long int var_24 = 17380857870294104903ULL;
signed char var_25 = (signed char)45;
signed char var_26 = (signed char)-114;
unsigned int var_27 = 1425592787U;
signed char var_28 = (signed char)40;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)186;
unsigned int var_31 = 4231508670U;
signed char var_32 = (signed char)-28;
unsigned char var_33 = (unsigned char)101;
unsigned int var_34 = 1209369392U;
signed char var_35 = (signed char)-47;
_Bool var_36 = (_Bool)1;
long long int var_37 = 3345072309517279162LL;
unsigned int var_38 = 2057055041U;
unsigned long long int var_39 = 17299264204206744152ULL;
long long int var_40 = -6235213772610032396LL;
unsigned int var_41 = 783396167U;
unsigned int var_42 = 1700708566U;
unsigned int var_43 = 2671650151U;
signed char var_44 = (signed char)-121;
unsigned long long int var_45 = 2307434273755693320ULL;
unsigned int var_46 = 3011192726U;
signed char var_47 = (signed char)-95;
unsigned int var_48 = 3418528863U;
long long int var_49 = -3819637221911454810LL;
long long int var_50 = 5605790343082437661LL;
signed char var_51 = (signed char)-114;
long long int var_52 = 7338253315803871791LL;
_Bool var_53 = (_Bool)1;
_Bool var_54 = (_Bool)1;
unsigned long long int var_55 = 11095034643403699966ULL;
unsigned short var_56 = (unsigned short)38864;
signed char var_57 = (signed char)-13;
unsigned int var_58 = 2043766450U;
int var_59 = 464889114;
_Bool var_60 = (_Bool)0;
unsigned int var_61 = 1560271287U;
short var_62 = (short)-3351;
unsigned long long int var_63 = 5464490620410961714ULL;
int var_64 = 621293647;
unsigned char var_65 = (unsigned char)159;
int var_66 = 1998228942;
unsigned long long int var_67 = 17871614000746410229ULL;
_Bool var_68 = (_Bool)1;
long long int var_69 = -6439074439867338601LL;
short var_70 = (short)27413;
unsigned short var_71 = (unsigned short)21095;
short var_72 = (short)-20770;
unsigned short var_73 = (unsigned short)24797;
unsigned int var_74 = 2196969269U;
long long int var_75 = -6954411189867135641LL;
unsigned short var_76 = (unsigned short)7979;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned char arr_2 [23] ;
short arr_4 [19] ;
int arr_8 [19] ;
unsigned char arr_11 [19] [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
long long int arr_16 [19] [19] ;
short arr_17 [19] [19] [19] [19] [19] ;
short arr_20 [19] ;
unsigned long long int arr_27 [21] [21] ;
unsigned int arr_28 [21] [21] ;
int arr_29 [21] [21] [21] ;
_Bool arr_30 [21] [21] [21] ;
unsigned int arr_31 [21] [21] ;
signed char arr_32 [21] [21] [21] ;
unsigned short arr_37 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_38 [21] ;
unsigned short arr_40 [21] [21] [21] [21] [21] ;
_Bool arr_41 [21] [21] [21] ;
signed char arr_42 [21] [21] [21] [21] ;
signed char arr_47 [21] [21] [21] ;
unsigned long long int arr_50 [21] [21] [21] [21] [21] ;
unsigned long long int arr_60 [21] ;
short arr_63 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3306743653U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-1150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 550157838;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3824263579U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = -1228907283417053860LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)26244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (short)-25916;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = 7872214585371041021ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = 1302401853U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1466742113 : -1474665740;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_31 [i_0] [i_1] = 2719934705U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)17786 : (unsigned short)10789;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 3850467480U : 2842334068U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)38813;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)24 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)96 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = 4345950660306705765ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_60 [i_0] = 2515685424922700113ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (short)-24585;
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
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
