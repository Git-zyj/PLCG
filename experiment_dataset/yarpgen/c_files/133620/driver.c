#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5869496968426560177LL;
unsigned char var_4 = (unsigned char)76;
unsigned int var_5 = 218894713U;
int var_6 = -1889260664;
short var_7 = (short)3925;
unsigned char var_8 = (unsigned char)79;
unsigned short var_9 = (unsigned short)41034;
unsigned char var_10 = (unsigned char)5;
short var_11 = (short)-14283;
_Bool var_12 = (_Bool)0;
int var_13 = -704487508;
int var_14 = -516503845;
unsigned int var_15 = 2112361559U;
unsigned char var_16 = (unsigned char)65;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
int var_18 = -967586449;
unsigned char var_19 = (unsigned char)178;
unsigned int var_20 = 795725369U;
int var_21 = 544942850;
unsigned char var_22 = (unsigned char)108;
int var_23 = -297031612;
short var_24 = (short)-6780;
unsigned short var_25 = (unsigned short)1235;
unsigned char var_26 = (unsigned char)8;
signed char var_27 = (signed char)-60;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)136;
unsigned long long int var_31 = 15746337648317859378ULL;
unsigned int var_32 = 1999065454U;
int var_33 = 1283717627;
_Bool var_34 = (_Bool)1;
int var_35 = 366715781;
short var_36 = (short)-3041;
long long int var_37 = 3740330006486685314LL;
unsigned int var_38 = 4191623997U;
unsigned long long int var_39 = 14875713903634700148ULL;
short var_40 = (short)-27517;
unsigned long long int var_41 = 8954592629486954253ULL;
unsigned char var_42 = (unsigned char)123;
unsigned int var_43 = 154624491U;
signed char var_44 = (signed char)-126;
signed char var_45 = (signed char)105;
unsigned short var_46 = (unsigned short)20221;
unsigned int var_47 = 1716390386U;
short var_48 = (short)10181;
int var_49 = -836352012;
long long int var_50 = 615646549329544551LL;
unsigned short var_51 = (unsigned short)48921;
_Bool var_52 = (_Bool)0;
unsigned char var_53 = (unsigned char)141;
unsigned short var_54 = (unsigned short)6800;
unsigned int var_55 = 2517724313U;
unsigned long long int var_56 = 17835636372449383904ULL;
unsigned char var_57 = (unsigned char)163;
int var_58 = 511396506;
_Bool var_59 = (_Bool)0;
unsigned int var_60 = 2893429960U;
signed char var_61 = (signed char)-1;
unsigned char var_62 = (unsigned char)109;
short arr_0 [18] ;
_Bool arr_1 [18] [18] ;
unsigned char arr_2 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
int arr_4 [18] ;
unsigned int arr_7 [18] [18] [18] ;
unsigned char arr_9 [18] [18] [18] [18] ;
int arr_12 [18] [18] ;
unsigned long long int arr_13 [18] [18] [18] ;
unsigned short arr_14 [18] [18] ;
unsigned long long int arr_16 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_19 [18] [18] [18] ;
unsigned char arr_21 [18] [18] [18] ;
unsigned short arr_26 [18] [18] [18] ;
unsigned long long int arr_27 [18] ;
_Bool arr_33 [18] [18] ;
unsigned long long int arr_35 [18] [18] [18] [18] ;
unsigned char arr_36 [18] [18] [18] [18] [18] [18] ;
signed char arr_37 [18] [18] [18] [18] ;
unsigned char arr_42 [18] [18] [18] ;
unsigned char arr_45 [18] ;
unsigned char arr_46 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)19154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 8435414331502765433ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1340980003;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 815692933U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 2054986595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2488754663879037716ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)64434;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5398222449469984225ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)22440 : (unsigned short)35326;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 12564885632608805191ULL : 11662299941222757075ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14012006249247260199ULL : 5096365844463146608ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned char)171;
}

void checksum() {
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
