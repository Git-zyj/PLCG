#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
long long int var_1 = 1570530489123935292LL;
short var_2 = (short)20568;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1824493718U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8150415873900538154LL;
signed char var_7 = (signed char)54;
unsigned int var_8 = 3142619058U;
int var_10 = -1665547388;
unsigned int var_11 = 396701966U;
unsigned short var_12 = (unsigned short)47527;
unsigned char var_13 = (unsigned char)216;
int var_14 = 1790124364;
int zero = 0;
long long int var_15 = 7225464588481794273LL;
signed char var_16 = (signed char)-17;
unsigned short var_17 = (unsigned short)25098;
unsigned long long int var_18 = 3737853928170853389ULL;
unsigned char var_19 = (unsigned char)123;
unsigned short var_20 = (unsigned short)18977;
unsigned int var_21 = 1954920144U;
unsigned short var_22 = (unsigned short)44112;
_Bool var_23 = (_Bool)0;
long long int var_24 = -1878521979759973075LL;
signed char var_25 = (signed char)-44;
unsigned short var_26 = (unsigned short)53726;
unsigned char var_27 = (unsigned char)209;
signed char var_28 = (signed char)99;
unsigned char var_29 = (unsigned char)109;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-6;
unsigned int var_32 = 2913316108U;
int var_33 = -2062444580;
long long int var_34 = -2307192487906406571LL;
signed char var_35 = (signed char)42;
int var_36 = 570203611;
unsigned char var_37 = (unsigned char)101;
signed char var_38 = (signed char)83;
long long int var_39 = -8445473428018384730LL;
_Bool var_40 = (_Bool)0;
unsigned long long int var_41 = 1868262255978863455ULL;
unsigned int var_42 = 578062226U;
unsigned char var_43 = (unsigned char)204;
int var_44 = -787517791;
long long int var_45 = -7928456028472054308LL;
unsigned int var_46 = 2018446526U;
signed char var_47 = (signed char)125;
signed char var_48 = (signed char)-14;
signed char var_49 = (signed char)78;
unsigned char var_50 = (unsigned char)41;
long long int var_51 = 6173246224925883637LL;
unsigned long long int var_52 = 1255358142481134496ULL;
_Bool var_53 = (_Bool)1;
unsigned int arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned char arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned short arr_4 [24] ;
_Bool arr_5 [24] [24] ;
unsigned int arr_6 [24] [24] [24] ;
short arr_9 [24] [24] [24] ;
unsigned int arr_10 [24] ;
unsigned short arr_11 [24] [24] ;
unsigned int arr_14 [24] [24] [24] ;
signed char arr_16 [24] [24] ;
unsigned short arr_17 [24] [24] [24] [24] ;
unsigned char arr_18 [24] [24] [24] [24] ;
unsigned short arr_19 [24] [24] [24] [24] ;
int arr_22 [24] [24] ;
_Bool arr_23 [24] [24] [24] [24] ;
int arr_24 [24] [24] [24] ;
unsigned short arr_29 [24] ;
long long int arr_30 [24] [24] [24] ;
unsigned short arr_35 [24] [24] [24] [24] ;
signed char arr_39 [24] [24] [24] [24] [24] [24] [24] ;
_Bool arr_42 [24] [24] [24] [24] ;
unsigned int arr_43 [24] [24] ;
long long int arr_47 [23] [23] [23] ;
unsigned int arr_49 [23] [23] ;
long long int arr_12 [24] ;
int arr_25 [24] [24] [24] [24] ;
unsigned int arr_52 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4182068241U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 799697968U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)35743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 410927454U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-17564;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1174531365U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)46062;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2310103337U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)20838 : (unsigned short)63963;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)146 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)7664 : (unsigned short)31551;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 104704827;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -1807703660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61228 : (unsigned short)26326;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 2452961197089542551LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16648;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? 3219558985U : 3034491573U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1900049744210034542LL : 6570053286220071900LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? 2376392616U : 3513635009U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -3689549659364201549LL : 1795935769705771116LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 207342879 : 824309120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 2264751961U : 2620304513U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
