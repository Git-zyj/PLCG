#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22928;
unsigned short var_1 = (unsigned short)49920;
signed char var_2 = (signed char)-111;
signed char var_3 = (signed char)-91;
long long int var_5 = -9078562780665330642LL;
long long int var_8 = -2498466917650155664LL;
unsigned int var_9 = 2046506790U;
long long int var_10 = -6162279248125329438LL;
unsigned short var_11 = (unsigned short)16421;
unsigned int var_12 = 1891157977U;
unsigned short var_13 = (unsigned short)33185;
short var_14 = (short)3300;
signed char var_15 = (signed char)-87;
signed char var_16 = (signed char)35;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)121;
long long int var_20 = -5213193859336243285LL;
unsigned long long int var_21 = 5814594878408979062ULL;
long long int var_22 = 2398171516773900601LL;
unsigned int var_23 = 2613705123U;
unsigned int var_24 = 647834337U;
unsigned short var_25 = (unsigned short)17389;
long long int var_26 = -8477852449368752916LL;
unsigned long long int var_27 = 11698007940665058877ULL;
unsigned long long int var_28 = 14540090026697688389ULL;
int var_29 = -104085969;
unsigned long long int var_30 = 9184109255700445526ULL;
unsigned long long int var_31 = 16297844456660978601ULL;
unsigned int var_32 = 3357700267U;
signed char var_33 = (signed char)-44;
unsigned long long int var_34 = 13930578680242976046ULL;
unsigned char var_35 = (unsigned char)240;
unsigned long long int var_36 = 12408170649569565280ULL;
unsigned int var_37 = 2901912494U;
short var_38 = (short)-32466;
unsigned int var_39 = 4028594838U;
unsigned long long int var_40 = 14477588743661025745ULL;
unsigned int var_41 = 4132711004U;
short var_42 = (short)-31424;
int var_43 = 308842084;
signed char var_44 = (signed char)60;
_Bool var_45 = (_Bool)0;
long long int var_46 = 1038395816077450359LL;
int var_47 = 709017343;
int var_48 = -1228844375;
short var_49 = (short)1262;
signed char var_50 = (signed char)-7;
unsigned int var_51 = 3943380399U;
int var_52 = -1446275385;
long long int var_53 = 4814658828077645286LL;
unsigned short var_54 = (unsigned short)38726;
signed char var_55 = (signed char)-75;
int var_56 = -1549502099;
signed char var_57 = (signed char)-121;
int var_58 = 928781712;
signed char var_59 = (signed char)-19;
signed char var_60 = (signed char)-44;
int var_61 = 1494265912;
unsigned short var_62 = (unsigned short)35260;
int var_63 = -1386521921;
unsigned short var_64 = (unsigned short)44725;
unsigned int var_65 = 4020319767U;
int var_66 = 914980588;
signed char var_67 = (signed char)-116;
long long int var_68 = 8063396126635973107LL;
signed char arr_0 [16] ;
signed char arr_1 [16] [16] ;
signed char arr_3 [16] ;
long long int arr_4 [16] [16] ;
long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_9 [16] [16] ;
unsigned long long int arr_10 [16] [16] [16] [16] [16] ;
int arr_11 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_13 [16] [16] ;
long long int arr_16 [16] ;
unsigned long long int arr_17 [16] ;
unsigned long long int arr_25 [16] ;
unsigned short arr_27 [25] [25] ;
int arr_29 [25] [25] ;
signed char arr_30 [25] [25] [25] ;
long long int arr_31 [25] [25] [25] ;
long long int arr_35 [25] [25] [25] ;
int arr_42 [25] [25] [25] ;
signed char arr_49 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2831803660442482499LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4952241580496334618LL : -527458799376089840LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 1948959638254218316ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 4425994120330072942ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1391026801 : 339350171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 2144527698U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -1786155574478845035LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 15238226207446269968ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 8446397149251316036ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)2709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = 1207658153;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -8810693954732680785LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5500794315997761227LL : 854609552327230576LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1219113506 : -921339213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)-18;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
