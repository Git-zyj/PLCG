#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1224192092;
signed char var_4 = (signed char)-86;
short var_5 = (short)-12508;
unsigned int var_7 = 680960829U;
unsigned int var_8 = 744487263U;
unsigned long long int var_9 = 18068313433223595165ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3918643023293357745ULL;
unsigned long long int var_15 = 321115487831466364ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-68;
unsigned char var_19 = (unsigned char)243;
unsigned short var_20 = (unsigned short)34586;
unsigned long long int var_21 = 18059252239766533833ULL;
unsigned char var_22 = (unsigned char)19;
unsigned char arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
long long int arr_4 [12] [12] [12] ;
short arr_7 [12] [12] [12] ;
int arr_8 [12] [12] ;
unsigned char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)138 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 6277841565492151244ULL : 6149525124340249700ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5865303439651053567LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-9235 : (short)-23042;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -846586146 : 1568816312;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)113;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
