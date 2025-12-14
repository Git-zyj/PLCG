#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12875;
short var_1 = (short)-27219;
signed char var_2 = (signed char)-83;
unsigned long long int var_5 = 4098615196384812585ULL;
signed char var_6 = (signed char)-37;
signed char var_8 = (signed char)-1;
unsigned long long int var_9 = 12530851355067172931ULL;
signed char var_10 = (signed char)122;
unsigned long long int var_11 = 9123831797225346845ULL;
unsigned long long int var_12 = 7386471216721813358ULL;
int var_14 = -954468144;
signed char var_15 = (signed char)17;
signed char var_16 = (signed char)-91;
signed char var_17 = (signed char)-90;
unsigned long long int var_18 = 12188644439809705092ULL;
int zero = 0;
signed char var_19 = (signed char)-64;
unsigned long long int var_20 = 13557976319417787033ULL;
unsigned long long int var_21 = 1267084054681164101ULL;
signed char var_22 = (signed char)-3;
short var_23 = (short)32067;
short var_24 = (short)19478;
short var_25 = (short)-25027;
unsigned long long int var_26 = 2057148174671406965ULL;
short var_27 = (short)32632;
unsigned long long int var_28 = 17264862394937970778ULL;
int var_29 = 529102984;
short var_30 = (short)-25059;
unsigned long long int var_31 = 17154989108606819921ULL;
short var_32 = (short)29937;
unsigned long long int var_33 = 6861206867131751762ULL;
signed char var_34 = (signed char)-105;
unsigned long long int var_35 = 2731369085294657009ULL;
int var_36 = -1984208834;
short var_37 = (short)17401;
short var_38 = (short)-28399;
short var_39 = (short)-32607;
signed char var_40 = (signed char)-51;
signed char var_41 = (signed char)-126;
unsigned long long int var_42 = 6468208362207616745ULL;
signed char var_43 = (signed char)-40;
short var_44 = (short)25933;
unsigned long long int var_45 = 612751610658031864ULL;
int var_46 = 157201323;
signed char var_47 = (signed char)-41;
short var_48 = (short)-29608;
unsigned long long int var_49 = 14032750584095636652ULL;
short var_50 = (short)7529;
signed char var_51 = (signed char)94;
unsigned long long int var_52 = 16983689498341615258ULL;
int var_53 = 134389801;
signed char var_54 = (signed char)-94;
unsigned long long int var_55 = 7030209791165383742ULL;
signed char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
int arr_2 [20] ;
signed char arr_3 [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
signed char arr_6 [20] ;
short arr_7 [17] ;
signed char arr_8 [17] ;
int arr_9 [17] [17] ;
signed char arr_10 [17] ;
signed char arr_12 [17] ;
int arr_13 [17] [17] [17] ;
signed char arr_15 [12] ;
short arr_16 [12] [12] ;
int arr_17 [12] [12] [12] ;
signed char arr_19 [12] [12] ;
int arr_20 [12] [12] ;
signed char arr_21 [12] ;
unsigned long long int arr_23 [12] ;
short arr_25 [12] ;
signed char arr_30 [12] [12] [12] ;
unsigned long long int arr_32 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9262660902410679407ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -951277982;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8814656240632301110ULL : 15216169148665263255ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 17802005248154415971ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)13082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = -140762909;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1083846230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (short)27709;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1808674254;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 1700222921;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = 10211090848474636863ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (short)23110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 13785190091539069595ULL;
}

void checksum() {
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
