#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)178;
unsigned short var_2 = (unsigned short)50705;
short var_3 = (short)21122;
unsigned short var_4 = (unsigned short)40398;
unsigned short var_5 = (unsigned short)57440;
short var_6 = (short)20921;
short var_7 = (short)-19879;
int var_8 = 1474223226;
unsigned short var_9 = (unsigned short)26400;
int zero = 0;
unsigned long long int var_10 = 1495513579457565975ULL;
unsigned short var_11 = (unsigned short)6275;
unsigned short var_12 = (unsigned short)64866;
unsigned long long int var_13 = 12146378460835313188ULL;
unsigned long long int var_14 = 8933601474882900274ULL;
unsigned char var_15 = (unsigned char)17;
short var_16 = (short)-1730;
short var_17 = (short)-15065;
int var_18 = -1650853035;
unsigned int var_19 = 1753820760U;
unsigned short var_20 = (unsigned short)30266;
long long int var_21 = -3362656890465349501LL;
unsigned long long int var_22 = 4402664544159641388ULL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-15777;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)94;
unsigned char var_27 = (unsigned char)48;
unsigned short arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
int arr_3 [10] [10] [10] ;
short arr_4 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] [10] [10] ;
int arr_9 [10] [10] [10] [10] ;
short arr_11 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_32 [19] [19] [19] [19] [19] ;
unsigned long long int arr_33 [19] [19] [19] [19] ;
unsigned short arr_34 [19] [19] [19] [19] [19] [19] [19] ;
short arr_39 [19] [19] [19] ;
short arr_41 [19] [19] [19] ;
long long int arr_42 [19] [19] [19] [19] ;
unsigned char arr_43 [19] ;
unsigned char arr_10 [10] [10] [10] [10] ;
unsigned short arr_15 [10] [10] [10] [10] [10] ;
unsigned long long int arr_16 [10] [10] ;
unsigned short arr_17 [10] ;
unsigned int arr_20 [10] ;
long long int arr_36 [19] [19] [19] [19] [19] [19] ;
long long int arr_37 [19] [19] ;
unsigned int arr_47 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)49876;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 18346958547711518457ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 380126394;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)10588;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 16234234618693838044ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 11339800947044976783ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6487895636924794743ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1900675616;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-25569;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 697604309U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 11197239483148674008ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 13952823960904660006ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)29683;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-15932 : (short)31106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (short)-9084;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 8551111787426610827LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_43 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)16163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 10343344959565159697ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)17966;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 3306490272U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2370338985479362725LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_37 [i_0] [i_1] = -5743693694051567277LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? 3697784766U : 2362843024U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
