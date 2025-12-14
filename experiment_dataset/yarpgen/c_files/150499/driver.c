#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11703915502082927474ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)38717;
unsigned short var_3 = (unsigned short)26520;
int var_4 = 1752326830;
long long int var_5 = -4540855299692534659LL;
short var_6 = (short)26115;
short var_7 = (short)11586;
unsigned long long int var_8 = 7684554044381502683ULL;
unsigned short var_9 = (unsigned short)5190;
int zero = 0;
long long int var_10 = -5321824004741714130LL;
long long int var_11 = -8044596799423744031LL;
unsigned char var_12 = (unsigned char)164;
short var_13 = (short)-27966;
int var_14 = -535659497;
unsigned char var_15 = (unsigned char)150;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-1257;
unsigned short var_18 = (unsigned short)63988;
unsigned char var_19 = (unsigned char)46;
unsigned long long int var_20 = 11230880266012519532ULL;
unsigned int var_21 = 2302679640U;
long long int var_22 = 802141444842466258LL;
long long int var_23 = -553934950270071446LL;
signed char var_24 = (signed char)95;
unsigned int var_25 = 4104649846U;
signed char var_26 = (signed char)-26;
int var_27 = -749371794;
long long int var_28 = -4893755831638153886LL;
unsigned int var_29 = 2983044956U;
unsigned char var_30 = (unsigned char)113;
signed char var_31 = (signed char)49;
unsigned int var_32 = 1625521658U;
unsigned int var_33 = 1839365930U;
long long int var_34 = 7162462914035800293LL;
signed char var_35 = (signed char)-59;
long long int var_36 = 6776580292211685430LL;
short var_37 = (short)7390;
long long int var_38 = 3904953220254823506LL;
long long int var_39 = -4048232470272162616LL;
signed char var_40 = (signed char)-28;
_Bool var_41 = (_Bool)0;
int var_42 = -148651803;
unsigned char var_43 = (unsigned char)216;
long long int var_44 = -7049158578403942725LL;
unsigned char var_45 = (unsigned char)189;
signed char var_46 = (signed char)-30;
unsigned char var_47 = (unsigned char)253;
unsigned long long int var_48 = 14763026207485471756ULL;
unsigned char var_49 = (unsigned char)64;
_Bool var_50 = (_Bool)1;
long long int var_51 = -1496094275128489657LL;
_Bool var_52 = (_Bool)0;
_Bool var_53 = (_Bool)1;
signed char var_54 = (signed char)-51;
unsigned int var_55 = 3934256584U;
_Bool var_56 = (_Bool)1;
signed char var_57 = (signed char)-102;
_Bool var_58 = (_Bool)1;
unsigned int var_59 = 1202031383U;
long long int var_60 = 7946640771386445622LL;
unsigned long long int var_61 = 16652432936237123715ULL;
unsigned short var_62 = (unsigned short)35542;
unsigned int arr_0 [22] [22] ;
unsigned short arr_1 [22] [22] ;
long long int arr_5 [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
short arr_9 [22] [22] [22] [22] ;
unsigned int arr_12 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_15 [22] [22] ;
signed char arr_33 [23] ;
unsigned char arr_34 [23] [23] ;
long long int arr_35 [23] ;
signed char arr_37 [23] ;
unsigned char arr_38 [23] ;
_Bool arr_42 [23] [23] [23] ;
int arr_43 [23] ;
unsigned int arr_44 [23] [23] [23] ;
unsigned int arr_45 [23] [23] [23] [23] ;
unsigned long long int arr_50 [23] ;
long long int arr_55 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 91729417U : 3884734607U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)61849;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4675400502010632719LL : 7364887716473000578LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 692887781840717262ULL : 3438452923189047865ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-1814;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 2320217108U : 2550812865U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)121 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = 147910227966711908LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (signed char)26 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = 186352053;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 3185611558U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 1873847416U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_50 [i_0] = 3130436732541447254ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_55 [i_0] [i_1] = 6220802732921984520LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
