#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4721328858047830141ULL;
unsigned short var_2 = (unsigned short)11170;
short var_3 = (short)10211;
unsigned short var_4 = (unsigned short)61020;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-21946;
int var_7 = 19395823;
short var_8 = (short)19130;
int var_9 = -1153169276;
int var_10 = -1405505616;
long long int var_11 = -8268080389926698111LL;
unsigned long long int var_12 = 13567787943099890184ULL;
int var_13 = 68850724;
unsigned short var_14 = (unsigned short)50898;
unsigned char var_15 = (unsigned char)142;
long long int var_16 = -5020863607936846216LL;
int zero = 0;
unsigned short var_17 = (unsigned short)53818;
unsigned int var_18 = 2028011506U;
unsigned char var_19 = (unsigned char)143;
signed char var_20 = (signed char)-103;
unsigned char var_21 = (unsigned char)29;
unsigned short var_22 = (unsigned short)42326;
unsigned short var_23 = (unsigned short)30632;
unsigned int var_24 = 3487431465U;
unsigned char var_25 = (unsigned char)239;
signed char var_26 = (signed char)93;
unsigned long long int var_27 = 828048533713432202ULL;
short var_28 = (short)21583;
int var_29 = -1947302391;
long long int var_30 = 3215679855507778697LL;
unsigned int var_31 = 2039035121U;
long long int var_32 = 1345989979378909934LL;
unsigned int var_33 = 3679808936U;
short var_34 = (short)27188;
unsigned char var_35 = (unsigned char)234;
unsigned long long int var_36 = 5113550832022718436ULL;
unsigned int var_37 = 1105629303U;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
_Bool arr_2 [15] [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned int arr_4 [15] [15] [15] ;
unsigned int arr_5 [15] [15] ;
unsigned int arr_7 [15] [15] ;
unsigned int arr_8 [15] ;
long long int arr_9 [15] [15] ;
int arr_11 [15] [15] ;
unsigned short arr_15 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)62830;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)14004;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 354168365U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3625676826U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1112259717U : 1762343U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1305996407U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 2662294661043254493LL : 4582696028359628533LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 1701134698;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15281;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
