#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5618572976108688778LL;
unsigned int var_1 = 2540590553U;
unsigned char var_2 = (unsigned char)136;
short var_3 = (short)-5984;
unsigned int var_4 = 3211053345U;
long long int var_5 = -2488463043413734064LL;
unsigned long long int var_6 = 17056349110286884979ULL;
int var_7 = 1891727166;
short var_8 = (short)21974;
unsigned long long int var_9 = 14356845917705364191ULL;
long long int var_10 = -1266492973115430210LL;
int var_11 = 1129972904;
long long int var_12 = -8624690370209650182LL;
unsigned char var_13 = (unsigned char)250;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2470948589U;
signed char var_16 = (signed char)108;
unsigned char var_17 = (unsigned char)70;
int zero = 0;
int var_18 = 1890396864;
short var_19 = (short)16596;
long long int var_20 = 322643362930608196LL;
short var_21 = (short)-26931;
unsigned char var_22 = (unsigned char)249;
long long int var_23 = 6937326455246683144LL;
unsigned long long int var_24 = 15087043214592506448ULL;
unsigned char var_25 = (unsigned char)141;
int var_26 = -1537902409;
signed char var_27 = (signed char)-61;
long long int var_28 = -8229165408851703454LL;
unsigned int var_29 = 2402680560U;
int var_30 = 630654917;
unsigned char var_31 = (unsigned char)84;
short var_32 = (short)15532;
int var_33 = -592385402;
signed char var_34 = (signed char)93;
unsigned char var_35 = (unsigned char)34;
unsigned char var_36 = (unsigned char)193;
unsigned char var_37 = (unsigned char)20;
signed char var_38 = (signed char)-10;
unsigned short var_39 = (unsigned short)3702;
_Bool var_40 = (_Bool)1;
unsigned long long int var_41 = 13687832562485809832ULL;
long long int var_42 = -8499244803962426374LL;
unsigned char var_43 = (unsigned char)17;
unsigned long long int var_44 = 6601667232570022992ULL;
unsigned int var_45 = 3024747033U;
unsigned char var_46 = (unsigned char)178;
unsigned char var_47 = (unsigned char)33;
_Bool var_48 = (_Bool)0;
long long int var_49 = -8608648912855134009LL;
unsigned long long int var_50 = 4558625296949710916ULL;
signed char var_51 = (signed char)42;
unsigned char var_52 = (unsigned char)203;
unsigned char var_53 = (unsigned char)112;
unsigned int var_54 = 2599181992U;
unsigned char var_55 = (unsigned char)206;
unsigned long long int arr_0 [19] ;
short arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned int arr_3 [19] [19] [19] ;
_Bool arr_4 [19] ;
long long int arr_7 [19] [19] [19] [19] [19] ;
short arr_8 [19] ;
int arr_10 [12] [12] ;
long long int arr_11 [12] ;
long long int arr_15 [12] [12] [12] ;
short arr_16 [12] [12] [12] [12] ;
int arr_17 [12] [12] [12] ;
unsigned char arr_19 [12] ;
unsigned int arr_20 [12] [12] [12] ;
unsigned long long int arr_21 [12] [12] [12] [12] ;
unsigned long long int arr_22 [12] [12] [12] ;
unsigned int arr_24 [12] [12] [12] [12] [12] ;
signed char arr_26 [12] [12] ;
long long int arr_27 [12] [12] [12] ;
unsigned long long int arr_28 [12] ;
int arr_29 [12] [12] [12] [12] ;
int arr_33 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 17554505109359016012ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-25945;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3884233983U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 4096164826543934427LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)10481;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = -1545798243;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -888306104165510896LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4403180785738756669LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)-30432;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 168076740;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3429308333U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5690339473949430503ULL : 1749299081395532339ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 7402166484836376741ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 2537105788U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-122 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3331335916419776208LL : 5837050527175033371LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 9479480568070514415ULL : 8618865144759905003ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 366984256;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1031061651;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
