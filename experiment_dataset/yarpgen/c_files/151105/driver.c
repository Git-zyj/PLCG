#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8722967913896863516LL;
unsigned short var_1 = (unsigned short)35369;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-9102;
unsigned short var_4 = (unsigned short)57038;
long long int var_6 = -1018260411363356313LL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-29337;
short var_10 = (short)16059;
long long int var_11 = -5571588391358777885LL;
unsigned int var_12 = 2083716961U;
signed char var_13 = (signed char)75;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-5;
short var_16 = (short)-18572;
short var_17 = (short)-23508;
unsigned int var_18 = 1276366319U;
signed char var_19 = (signed char)19;
int zero = 0;
unsigned long long int var_20 = 9185617959719351023ULL;
int var_21 = 1671425599;
unsigned long long int var_22 = 17356353192999018386ULL;
unsigned char var_23 = (unsigned char)196;
int var_24 = -2145083310;
unsigned short var_25 = (unsigned short)22845;
unsigned short var_26 = (unsigned short)37462;
signed char var_27 = (signed char)-21;
_Bool var_28 = (_Bool)1;
long long int var_29 = -8938409210647588115LL;
unsigned short var_30 = (unsigned short)32447;
unsigned char var_31 = (unsigned char)16;
unsigned int var_32 = 3440422561U;
signed char var_33 = (signed char)-96;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-34;
unsigned long long int var_36 = 1108912307554000130ULL;
short var_37 = (short)-18349;
int var_38 = 2075520254;
long long int var_39 = 6026104669319258812LL;
_Bool var_40 = (_Bool)0;
short arr_1 [21] ;
long long int arr_3 [25] ;
unsigned short arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
signed char arr_6 [25] [25] ;
signed char arr_7 [24] ;
signed char arr_10 [24] ;
unsigned short arr_13 [24] [24] ;
unsigned long long int arr_17 [17] [17] ;
_Bool arr_14 [24] [24] ;
unsigned short arr_15 [24] [24] [24] ;
_Bool arr_20 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)15938;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -6333794544050117663LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)2776;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 15349254177853398976ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)29796;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 7757042025002154735ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)37600 : (unsigned short)46664;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
