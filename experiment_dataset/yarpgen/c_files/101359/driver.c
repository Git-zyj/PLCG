#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
short var_1 = (short)-24424;
unsigned short var_2 = (unsigned short)21098;
signed char var_4 = (signed char)-52;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)45254;
unsigned char var_7 = (unsigned char)150;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)57467;
short var_11 = (short)-698;
unsigned char var_12 = (unsigned char)115;
unsigned int var_15 = 2904127000U;
unsigned long long int var_16 = 10652686757442888295ULL;
unsigned short var_19 = (unsigned short)23264;
int zero = 0;
unsigned char var_20 = (unsigned char)61;
unsigned char var_21 = (unsigned char)253;
long long int var_22 = -1120606277900914327LL;
unsigned long long int var_23 = 9406916694541103083ULL;
unsigned char var_24 = (unsigned char)159;
unsigned char var_25 = (unsigned char)220;
unsigned int var_26 = 1238421211U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 27907467U;
long long int var_29 = 2547919216906792475LL;
unsigned short var_30 = (unsigned short)32982;
unsigned long long int var_31 = 7677317585942136098ULL;
unsigned short arr_1 [12] ;
short arr_2 [12] ;
unsigned short arr_3 [12] [12] [12] ;
signed char arr_4 [12] [12] [12] ;
unsigned char arr_6 [12] [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] ;
_Bool arr_9 [12] [12] [12] ;
short arr_10 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)51099;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-30093;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)7789;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2234692725592708528ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 10037042860905359872ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-10789 : (short)-51;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
