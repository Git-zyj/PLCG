#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1201667786;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-28228;
unsigned int var_3 = 24887070U;
signed char var_4 = (signed char)33;
int var_5 = -662047679;
unsigned short var_6 = (unsigned short)24494;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)232;
unsigned short var_9 = (unsigned short)16276;
int var_10 = -209877317;
signed char var_11 = (signed char)-106;
unsigned char var_12 = (unsigned char)104;
unsigned long long int var_13 = 4768292770448111881ULL;
unsigned short var_14 = (unsigned short)52914;
int zero = 0;
unsigned int var_15 = 3818784742U;
unsigned short var_16 = (unsigned short)37781;
unsigned long long int var_17 = 16161527906372720294ULL;
unsigned short var_18 = (unsigned short)34643;
unsigned char var_19 = (unsigned char)144;
unsigned char var_20 = (unsigned char)23;
long long int var_21 = -953924352072047819LL;
unsigned int var_22 = 3398279450U;
unsigned short var_23 = (unsigned short)4805;
_Bool var_24 = (_Bool)1;
int var_25 = -915663308;
long long int var_26 = -4601988649598146741LL;
unsigned char var_27 = (unsigned char)57;
unsigned long long int var_28 = 4301813730665899607ULL;
long long int var_29 = 7056185810896540803LL;
unsigned long long int var_30 = 10563974234733733816ULL;
unsigned char var_31 = (unsigned char)151;
unsigned int var_32 = 811561739U;
_Bool var_33 = (_Bool)0;
long long int var_34 = -6774780766675382668LL;
unsigned char var_35 = (unsigned char)66;
unsigned char var_36 = (unsigned char)63;
unsigned int var_37 = 3735289599U;
long long int var_38 = -8664682405049982440LL;
short var_39 = (short)-23726;
short var_40 = (short)-22109;
short var_41 = (short)-9484;
unsigned int var_42 = 2920992885U;
long long int var_43 = 1503237561582423397LL;
short var_44 = (short)-31688;
int var_45 = -781503732;
int var_46 = 569054713;
unsigned int var_47 = 2284643027U;
unsigned short var_48 = (unsigned short)45312;
short var_49 = (short)23837;
short var_50 = (short)10527;
unsigned int var_51 = 239469550U;
int var_52 = -1493820006;
unsigned short var_53 = (unsigned short)43643;
unsigned short var_54 = (unsigned short)8314;
unsigned short var_55 = (unsigned short)36768;
unsigned char var_56 = (unsigned char)182;
unsigned char var_57 = (unsigned char)53;
unsigned char var_58 = (unsigned char)119;
signed char var_59 = (signed char)81;
signed char var_60 = (signed char)27;
_Bool var_61 = (_Bool)1;
unsigned long long int var_62 = 2782593261653876545ULL;
unsigned short var_63 = (unsigned short)29679;
signed char var_64 = (signed char)62;
int var_65 = 1646027631;
unsigned char var_66 = (unsigned char)17;
_Bool arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
int arr_2 [23] [23] [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_4 [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_6 [23] [23] [23] ;
short arr_7 [23] [23] ;
int arr_8 [23] [23] [23] [23] ;
short arr_9 [15] ;
short arr_10 [15] [15] ;
unsigned int arr_12 [15] [15] [15] ;
int arr_16 [15] [15] ;
short arr_18 [15] ;
signed char arr_19 [15] [15] [15] [15] ;
unsigned int arr_21 [15] [15] [15] [15] [15] ;
unsigned short arr_22 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_24 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_25 [15] [15] [15] ;
unsigned short arr_26 [15] [15] [15] ;
long long int arr_37 [15] [15] [15] [15] ;
int arr_46 [24] ;
unsigned long long int arr_48 [24] ;
signed char arr_49 [24] [24] ;
signed char arr_53 [24] ;
long long int arr_55 [24] [24] [24] [24] [24] [24] ;
long long int arr_57 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_64 [22] [22] ;
long long int arr_67 [22] [22] [22] ;
unsigned char arr_70 [22] ;
int arr_81 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1537993375;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1099133672138954677ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23960;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2089841366;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)-6928;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-3635 : (short)-15236;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2260569691U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 2102567030 : 1288954489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (short)15566;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2760465138U : 2211840035U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)45875;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 14166038987221008019ULL : 4875851213195586112ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 3175867617U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)16773;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 5495794969960977133LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = -1928897044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_48 [i_0] = 12735664238249830921ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_49 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_53 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6400097934810907547LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7361446072901266556LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_64 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = 3667644653926854656LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = -948707138;
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
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
