#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -360266131;
signed char var_1 = (signed char)-126;
short var_2 = (short)-1921;
unsigned short var_4 = (unsigned short)59651;
short var_6 = (short)6667;
unsigned short var_7 = (unsigned short)25281;
unsigned char var_8 = (unsigned char)17;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)36344;
signed char var_11 = (signed char)60;
signed char var_12 = (signed char)-100;
long long int var_13 = 8642814818365972442LL;
short var_14 = (short)11060;
unsigned short var_15 = (unsigned short)33895;
unsigned int var_16 = 4271132800U;
int var_17 = 682390463;
unsigned char var_18 = (unsigned char)28;
unsigned long long int var_19 = 12492125571340326843ULL;
int zero = 0;
signed char var_20 = (signed char)16;
unsigned short var_21 = (unsigned short)54419;
unsigned int var_22 = 8696818U;
int var_23 = -679904437;
unsigned int var_24 = 2808532708U;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 9207913536871683820ULL;
unsigned short var_27 = (unsigned short)45483;
signed char var_28 = (signed char)-125;
unsigned short var_29 = (unsigned short)2938;
short var_30 = (short)18593;
unsigned long long int var_31 = 5743932311733844249ULL;
short var_32 = (short)5503;
unsigned char var_33 = (unsigned char)175;
signed char var_34 = (signed char)-121;
unsigned short var_35 = (unsigned short)57151;
unsigned int var_36 = 3278900578U;
unsigned long long int var_37 = 13728596511696387065ULL;
unsigned short var_38 = (unsigned short)19392;
unsigned long long int var_39 = 1150770501544400908ULL;
short var_40 = (short)4290;
_Bool var_41 = (_Bool)0;
int var_42 = -1480463419;
unsigned long long int var_43 = 12117749596202539622ULL;
unsigned long long int var_44 = 9840989065560451005ULL;
unsigned long long int var_45 = 197078441948097907ULL;
unsigned short var_46 = (unsigned short)60155;
unsigned char var_47 = (unsigned char)204;
unsigned int var_48 = 1134719135U;
unsigned int var_49 = 3840372917U;
long long int var_50 = -4580727058973795376LL;
_Bool var_51 = (_Bool)0;
short var_52 = (short)-27812;
unsigned char var_53 = (unsigned char)55;
unsigned int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned int arr_4 [19] ;
unsigned int arr_5 [19] ;
signed char arr_8 [10] ;
_Bool arr_13 [10] [10] [10] ;
unsigned long long int arr_15 [10] [10] [10] [10] ;
unsigned short arr_16 [10] [10] [10] ;
unsigned short arr_23 [19] ;
unsigned short arr_24 [19] ;
int arr_27 [16] ;
unsigned short arr_28 [16] ;
unsigned char arr_30 [16] [16] ;
_Bool arr_31 [16] [16] [16] ;
short arr_32 [16] [16] ;
unsigned short arr_33 [16] [16] [16] ;
unsigned int arr_34 [16] [16] [16] ;
unsigned short arr_35 [16] [16] [16] ;
unsigned long long int arr_36 [16] [16] [16] [16] [16] ;
unsigned long long int arr_38 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_40 [16] [16] [16] [16] [16] [16] [16] ;
signed char arr_41 [16] [16] [16] [16] [16] [16] [16] ;
unsigned short arr_43 [16] [16] ;
unsigned long long int arr_48 [16] [16] [16] [16] ;
unsigned char arr_52 [16] [16] ;
int arr_66 [17] ;
signed char arr_2 [19] ;
short arr_6 [19] [19] ;
unsigned long long int arr_19 [10] [10] [10] [10] ;
unsigned int arr_20 [10] [10] [10] [10] [10] [10] ;
_Bool arr_21 [10] ;
unsigned char arr_22 [10] ;
unsigned long long int arr_25 [19] ;
int arr_26 [19] [19] ;
unsigned char arr_39 [16] ;
signed char arr_46 [16] [16] [16] [16] ;
short arr_50 [16] ;
unsigned long long int arr_53 [16] [16] [16] ;
_Bool arr_67 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2303455340U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1017202606U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 720947124U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1062080881752463078ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)3638;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10973 : (unsigned short)11693;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39475 : (unsigned short)33826;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = 1519408759;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (unsigned short)53563;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-5947;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)58981;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 1151608493U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned short)31115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 5729535651705733736ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9367301436083325406ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4235 : (unsigned short)61167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 2953813718799554105ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_52 [i_0] [i_1] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_66 [i_0] = -1207429603;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18802;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 6440169841836643862ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4101718277U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 7821464489767968630ULL : 12193163645029261256ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 1583992679 : 991370508;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (unsigned char)136 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = (short)21005;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 1019873462506324964ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_67 [i_0] = (_Bool)1;
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_67 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
