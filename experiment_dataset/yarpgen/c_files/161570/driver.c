#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13415257881970304235ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 1395284514452168909ULL;
unsigned long long int var_7 = 11272075428701270725ULL;
unsigned long long int var_8 = 9870560097895512217ULL;
unsigned long long int var_10 = 5092155310289081279ULL;
unsigned long long int var_11 = 2348853484023710202ULL;
int zero = 0;
int var_12 = 216884514;
unsigned long long int var_13 = 3600053512628398627ULL;
unsigned long long int var_14 = 16059474440574915063ULL;
long long int var_15 = -9036657990745647730LL;
int var_16 = -103099784;
long long int var_17 = 6338593599067095766LL;
long long int var_18 = 876423709890637929LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 789068630768024666ULL;
int var_21 = -1867290434;
_Bool var_22 = (_Bool)1;
int var_23 = 655064025;
_Bool var_24 = (_Bool)1;
long long int var_25 = -5508005495029111702LL;
int var_26 = 678577270;
int var_27 = 1112488037;
unsigned long long int var_28 = 1030017007269563157ULL;
unsigned long long int var_29 = 2429626625752520554ULL;
unsigned long long int var_30 = 5139011074576871578ULL;
unsigned long long int var_31 = 8104383958221875607ULL;
long long int var_32 = 9051440628304750248LL;
int var_33 = -398171762;
unsigned long long int var_34 = 2516096528014610826ULL;
unsigned long long int var_35 = 6056724129100288132ULL;
unsigned long long int var_36 = 1579890725093039282ULL;
unsigned long long int var_37 = 8806954650882905864ULL;
unsigned long long int var_38 = 9534355901307673254ULL;
unsigned long long int var_39 = 10867372346902930075ULL;
long long int var_40 = -3707447151274774581LL;
_Bool var_41 = (_Bool)1;
int var_42 = -713298769;
_Bool var_43 = (_Bool)1;
long long int arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] ;
int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned long long int arr_7 [17] [17] ;
unsigned long long int arr_9 [17] [17] ;
unsigned long long int arr_10 [17] ;
long long int arr_11 [17] [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] [17] ;
long long int arr_14 [17] [17] [17] ;
_Bool arr_17 [17] [17] [17] ;
unsigned long long int arr_18 [17] [17] ;
unsigned long long int arr_22 [17] ;
unsigned long long int arr_25 [17] [17] ;
int arr_26 [17] [17] ;
long long int arr_31 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1457845016207537262LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 17903006860368239230ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 10790973742018575191ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 6313644240507952834ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1731039761;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 3146907076188949642ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 11212584603762566585ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 8099305739515396113ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 15203575077805227741ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 6876944721131338447LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 14486127950548300590ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8966694663690601151LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 5614488934782118935ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 17602227666436328664ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = 6798164313582958625ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_26 [i_0] [i_1] = 1088039051;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_31 [i_0] [i_1] = -4836000584263070342LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
