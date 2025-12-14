#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
long long int var_1 = 5644754321987487999LL;
signed char var_2 = (signed char)-85;
unsigned char var_3 = (unsigned char)180;
unsigned char var_4 = (unsigned char)34;
long long int var_5 = -6013191505234999021LL;
signed char var_6 = (signed char)-31;
unsigned char var_7 = (unsigned char)238;
signed char var_8 = (signed char)21;
unsigned char var_9 = (unsigned char)201;
long long int var_10 = -2448508919599190968LL;
int zero = 0;
unsigned int var_11 = 1909746677U;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4302112515186765691LL;
unsigned char var_14 = (unsigned char)172;
int var_15 = -1734406794;
long long int var_16 = 7710517788705618990LL;
unsigned char var_17 = (unsigned char)21;
unsigned short var_18 = (unsigned short)42901;
unsigned long long int var_19 = 12881408852334071997ULL;
long long int var_20 = 1309095638294148457LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 398261294U;
long long int var_23 = -5701111830563344867LL;
signed char var_24 = (signed char)50;
signed char var_25 = (signed char)35;
long long int var_26 = -6537948381553227315LL;
long long int var_27 = -6433615855674473576LL;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-126;
int var_30 = 1296954995;
unsigned char var_31 = (unsigned char)154;
signed char var_32 = (signed char)14;
signed char var_33 = (signed char)-49;
unsigned char var_34 = (unsigned char)167;
unsigned long long int var_35 = 9296614805461538609ULL;
long long int var_36 = 8161419938902980222LL;
unsigned short var_37 = (unsigned short)63845;
unsigned char var_38 = (unsigned char)254;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)125;
unsigned short var_41 = (unsigned short)26082;
long long int var_42 = 313625876598125159LL;
long long int var_43 = 6040054545991828486LL;
long long int var_44 = 963434200859161974LL;
unsigned short var_45 = (unsigned short)20540;
unsigned char var_46 = (unsigned char)95;
int var_47 = -1819872073;
long long int var_48 = 3781318760120174948LL;
int var_49 = -2123749318;
int var_50 = -1817237045;
long long int var_51 = 209938689259417373LL;
unsigned short var_52 = (unsigned short)10631;
int var_53 = -821576089;
long long int var_54 = -7103990212125853250LL;
int var_55 = 1295260958;
_Bool var_56 = (_Bool)1;
_Bool var_57 = (_Bool)0;
unsigned int var_58 = 4082394661U;
unsigned int var_59 = 3648955464U;
_Bool var_60 = (_Bool)0;
unsigned char arr_1 [13] [13] ;
long long int arr_4 [13] ;
signed char arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] ;
signed char arr_7 [13] ;
unsigned int arr_8 [13] [13] [13] ;
unsigned char arr_10 [13] [13] [13] ;
long long int arr_11 [13] [13] [13] ;
long long int arr_12 [13] [13] [13] [13] ;
int arr_14 [10] ;
short arr_15 [10] [10] [10] ;
unsigned char arr_16 [10] [10] [10] ;
signed char arr_17 [10] ;
int arr_22 [10] ;
int arr_26 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_27 [10] [10] [10] [10] [10] [10] ;
long long int arr_28 [10] [10] ;
long long int arr_29 [10] [10] [10] [10] ;
unsigned char arr_32 [10] [10] [10] ;
int arr_35 [10] [10] ;
unsigned char arr_38 [10] [10] [10] ;
_Bool arr_39 [10] [10] [10] ;
signed char arr_46 [20] ;
int arr_47 [20] [20] ;
int arr_48 [20] ;
_Bool arr_50 [20] [20] [20] ;
short arr_51 [20] ;
unsigned short arr_52 [20] ;
unsigned char arr_54 [20] ;
long long int arr_55 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2517276643021053710LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 31826946U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -7196152641347001087LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -5609255177487327674LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -1764765997;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)1048;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-11 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = 2089067450;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1470344242;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = -7403204663808883913LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 7147997409558277431LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_35 [i_0] [i_1] = 135725516;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_46 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_47 [i_0] [i_1] = 239159099;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_48 [i_0] = -1355635060;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (short)1847 : (short)32021;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13654 : (unsigned short)34207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_54 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_55 [i_0] [i_1] = (i_0 % 2 == 0) ? -5716776047515712737LL : 4981788476545948346LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
