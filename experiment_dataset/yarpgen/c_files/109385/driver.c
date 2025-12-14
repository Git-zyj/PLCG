#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13826581930197415362ULL;
unsigned int var_1 = 3556857921U;
unsigned int var_2 = 1097597402U;
int var_3 = -660634878;
short var_4 = (short)-6495;
short var_5 = (short)-4709;
int var_6 = 1534034861;
int var_7 = -1108406195;
unsigned long long int var_8 = 2274553696340920390ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 3114680717801253914ULL;
_Bool var_11 = (_Bool)0;
int var_12 = -817381233;
_Bool var_13 = (_Bool)1;
int var_14 = -18995289;
int zero = 0;
unsigned int var_15 = 3527412373U;
long long int var_16 = -1336471984842449676LL;
int var_17 = 639322336;
long long int var_18 = 2752718154349550940LL;
unsigned char var_19 = (unsigned char)104;
long long int var_20 = -3476062901673043967LL;
short var_21 = (short)27009;
int var_22 = -1728690875;
short var_23 = (short)-28066;
unsigned long long int var_24 = 9560186606564458489ULL;
short var_25 = (short)14714;
unsigned long long int var_26 = 321228257373387954ULL;
signed char var_27 = (signed char)-56;
unsigned int var_28 = 1977566416U;
short var_29 = (short)-7672;
signed char var_30 = (signed char)-65;
int var_31 = 21323540;
short var_32 = (short)-12088;
_Bool var_33 = (_Bool)0;
short var_34 = (short)30872;
int var_35 = 1889766157;
short var_36 = (short)20602;
int var_37 = -447855208;
unsigned long long int var_38 = 4949239717660506300ULL;
long long int var_39 = 1947384216646883760LL;
unsigned short var_40 = (unsigned short)333;
int var_41 = 1511827226;
short var_42 = (short)-6808;
int var_43 = 451632014;
unsigned int var_44 = 1328215384U;
_Bool var_45 = (_Bool)0;
unsigned long long int var_46 = 16410278959510607678ULL;
int var_47 = -1493531125;
unsigned char var_48 = (unsigned char)244;
int var_49 = 942438245;
unsigned long long int var_50 = 12684594842813362478ULL;
unsigned char var_51 = (unsigned char)169;
_Bool var_52 = (_Bool)1;
unsigned int var_53 = 1297607980U;
long long int var_54 = -792592900643050339LL;
int var_55 = 1641790442;
unsigned char var_56 = (unsigned char)237;
unsigned short var_57 = (unsigned short)39898;
short arr_11 [23] [23] [23] ;
unsigned int arr_33 [22] [22] [22] [22] [22] ;
unsigned int arr_59 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-30593 : (short)-31936;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2173753900U : 3382357741U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1551112598U : 1991336346U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
