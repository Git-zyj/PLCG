#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)56831;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5743599513108583086LL;
unsigned short var_7 = (unsigned short)22890;
unsigned long long int var_8 = 16332342857835754018ULL;
unsigned short var_9 = (unsigned short)48890;
int var_13 = 268188829;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -532189930;
unsigned long long int var_16 = 15531312719415625425ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)22301;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)10803;
signed char var_21 = (signed char)10;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-17897;
short var_24 = (short)29187;
unsigned int var_25 = 828311535U;
unsigned long long int var_26 = 2853282081277434453ULL;
unsigned long long int var_27 = 710305687195558002ULL;
long long int var_28 = -8741985531752476381LL;
short var_29 = (short)-8116;
unsigned long long int var_30 = 16100475757277692568ULL;
short var_31 = (short)-9293;
_Bool var_32 = (_Bool)0;
short var_33 = (short)3529;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)65422;
unsigned short var_36 = (unsigned short)5611;
unsigned short var_37 = (unsigned short)2775;
unsigned short var_38 = (unsigned short)1782;
unsigned short var_39 = (unsigned short)28324;
int var_40 = -1259926425;
long long int var_41 = -909302725147162878LL;
unsigned short var_42 = (unsigned short)30168;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 4104423085023351987ULL;
short var_45 = (short)-5466;
long long int var_46 = -1515199384846046847LL;
unsigned long long int var_47 = 406058137494085504ULL;
short var_48 = (short)13088;
short var_49 = (short)30287;
short var_50 = (short)-16452;
unsigned long long int var_51 = 273149870277175019ULL;
int var_52 = 51110535;
unsigned short var_53 = (unsigned short)41927;
unsigned short var_54 = (unsigned short)51008;
_Bool var_55 = (_Bool)1;
unsigned short var_56 = (unsigned short)40467;
short var_57 = (short)21609;
unsigned char var_58 = (unsigned char)205;
short var_59 = (short)-32617;
short var_60 = (short)-6386;
_Bool var_61 = (_Bool)0;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned int arr_2 [24] [24] ;
_Bool arr_3 [24] ;
_Bool arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
unsigned short arr_6 [13] ;
long long int arr_9 [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] ;
long long int arr_15 [13] ;
unsigned long long int arr_17 [13] ;
unsigned short arr_22 [13] [13] [13] [13] ;
unsigned short arr_24 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_33 [20] ;
long long int arr_34 [20] [20] ;
unsigned short arr_35 [20] ;
unsigned long long int arr_36 [20] ;
int arr_38 [20] [20] [20] ;
unsigned long long int arr_39 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12854568079359035499ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 8387348362372482395ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1585258310U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)27472;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)33642;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -576744656397750254LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 7088540663667395739LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 5438500712579425085ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4815;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)39574;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (unsigned short)35083;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_34 [i_0] [i_1] = 7170806237301040793LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = (unsigned short)22042;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = 16558339407090872223ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1899557227 : 1773621351;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 6126452738679614717ULL;
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
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
