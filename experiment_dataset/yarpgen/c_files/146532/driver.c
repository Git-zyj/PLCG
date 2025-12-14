#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4875358562784387889ULL;
unsigned int var_2 = 1702697236U;
short var_3 = (short)14700;
int var_5 = -1661301563;
unsigned char var_9 = (unsigned char)110;
signed char var_11 = (signed char)-122;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 671755626U;
unsigned int var_14 = 905449711U;
int zero = 0;
unsigned short var_16 = (unsigned short)62811;
short var_17 = (short)-30008;
short var_18 = (short)-30209;
unsigned int var_19 = 2366764229U;
unsigned short var_20 = (unsigned short)54705;
short var_21 = (short)-12019;
_Bool var_22 = (_Bool)0;
long long int var_23 = -6489666507537027116LL;
unsigned int var_24 = 1243277937U;
unsigned long long int var_25 = 8801964749942941320ULL;
unsigned long long int var_26 = 3223908178140501589ULL;
long long int var_27 = 3104751999886536716LL;
long long int var_28 = 8095743934965937520LL;
_Bool var_29 = (_Bool)1;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned short arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned long long int arr_4 [25] ;
int arr_5 [25] [25] ;
unsigned short arr_7 [25] [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 380347979U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 895451235U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21602;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2183806955809900560ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 13333026791765568444ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1438800078;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)15425 : (unsigned short)61796;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -5481729437655005603LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
