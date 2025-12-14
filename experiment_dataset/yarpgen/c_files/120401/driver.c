#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20792;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)25;
unsigned char var_5 = (unsigned char)242;
unsigned char var_6 = (unsigned char)68;
unsigned char var_7 = (unsigned char)74;
unsigned long long int var_8 = 11797397375253698524ULL;
unsigned char var_9 = (unsigned char)71;
unsigned char var_10 = (unsigned char)109;
unsigned char var_11 = (unsigned char)175;
unsigned long long int var_12 = 15030095131193897726ULL;
int zero = 0;
unsigned long long int var_13 = 12712274719784281613ULL;
unsigned char var_14 = (unsigned char)243;
short var_15 = (short)-13565;
unsigned long long int var_16 = 17307605654278514767ULL;
unsigned char var_17 = (unsigned char)73;
unsigned char var_18 = (unsigned char)251;
unsigned long long int var_19 = 9541380155976677533ULL;
signed char var_20 = (signed char)99;
signed char var_21 = (signed char)-111;
signed char var_22 = (signed char)-37;
unsigned short arr_1 [14] ;
unsigned char arr_3 [14] ;
unsigned short arr_5 [14] [14] [14] ;
unsigned char arr_8 [14] ;
unsigned char arr_9 [14] [14] ;
unsigned char arr_2 [14] ;
unsigned char arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)21702;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)30603;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)147 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)23;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
