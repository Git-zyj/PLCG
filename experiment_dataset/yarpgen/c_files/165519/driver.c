#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 362747372;
signed char var_4 = (signed char)-118;
_Bool var_5 = (_Bool)0;
int var_7 = 2002480260;
signed char var_8 = (signed char)80;
long long int var_9 = 4943114204656954296LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)13527;
short var_14 = (short)30238;
int var_15 = 183392800;
unsigned short var_16 = (unsigned short)38173;
int var_17 = 1505847130;
int zero = 0;
unsigned short var_18 = (unsigned short)34649;
unsigned short var_19 = (unsigned short)55138;
unsigned long long int var_20 = 5123621803337891353ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 26604510U;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-12491;
unsigned int var_25 = 1452918471U;
unsigned long long int var_26 = 6792334560990669914ULL;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 97892665U;
unsigned long long int var_29 = 16075025914921901018ULL;
unsigned short var_30 = (unsigned short)26912;
unsigned int var_31 = 3742491879U;
long long int var_32 = -4960222040562927308LL;
unsigned short var_33 = (unsigned short)59296;
int var_34 = 920590840;
unsigned int arr_0 [12] ;
unsigned short arr_1 [12] ;
int arr_4 [16] ;
int arr_5 [16] [16] ;
unsigned int arr_7 [16] [16] [16] ;
int arr_9 [16] ;
unsigned int arr_11 [16] ;
signed char arr_12 [16] [16] ;
unsigned long long int arr_16 [16] [16] [16] ;
int arr_18 [16] [16] [16] [16] [16] ;
unsigned long long int arr_3 [12] [12] ;
unsigned short arr_6 [16] [16] ;
unsigned short arr_19 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1670673988U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)30363;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -320851509;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 682985012;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1281819319U : 1168142616U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -98735037;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 938195427U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 11363720580090482893ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -1221077807;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 18388534123561811121ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)19848;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)4141 : (unsigned short)53000;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
