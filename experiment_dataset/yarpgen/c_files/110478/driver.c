#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned long long int var_1 = 1219353563517277084ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11012318888897156987ULL;
unsigned char var_4 = (unsigned char)246;
short var_5 = (short)18927;
unsigned long long int var_6 = 10255814589208251685ULL;
unsigned int var_7 = 4017228680U;
signed char var_8 = (signed char)-70;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)84;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2695734147U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1686812018;
int var_15 = 351862233;
int var_16 = 875002764;
int var_17 = 1397830724;
unsigned short var_18 = (unsigned short)30863;
signed char var_19 = (signed char)110;
int var_20 = -393155332;
unsigned long long int var_21 = 5540259382608672000ULL;
short var_22 = (short)32342;
int var_23 = -1421708739;
int var_24 = 1027171876;
long long int var_25 = 1062205607794129668LL;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 8767162967947248639ULL;
signed char var_29 = (signed char)-109;
short var_30 = (short)-21420;
long long int var_31 = 5135339812660884200LL;
unsigned long long int var_32 = 17287660933037104872ULL;
long long int var_33 = -3846693002026194805LL;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)66;
int var_36 = 1648833740;
short var_37 = (short)-7781;
unsigned int var_38 = 532921274U;
short var_39 = (short)-16710;
_Bool var_40 = (_Bool)0;
unsigned short var_41 = (unsigned short)49975;
unsigned char var_42 = (unsigned char)227;
unsigned long long int var_43 = 5603638567025495134ULL;
unsigned char var_44 = (unsigned char)1;
int var_45 = -1654520303;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned int arr_2 [23] [23] ;
_Bool arr_6 [14] [14] ;
int arr_7 [14] [14] ;
signed char arr_8 [14] ;
unsigned int arr_10 [14] ;
int arr_13 [14] ;
unsigned long long int arr_14 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_18 [14] ;
int arr_24 [14] ;
int arr_29 [14] [14] [14] [14] [14] ;
unsigned long long int arr_30 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_35 [15] ;
int arr_40 [15] [15] [15] ;
short arr_44 [15] [15] [15] ;
unsigned int arr_45 [15] [15] [15] [15] [15] ;
_Bool arr_52 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 194546210U : 788376373U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2548633128U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2052863158;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2481387051U : 2758169004U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = -175643864;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15497066880395622628ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 5509021227170178558ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = -510258894;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 1773465374;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 14539175762830707633ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = 4374053458089689794ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 1668681207;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (short)17682;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 3268568485U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_52 [i_0] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
