#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20359;
unsigned long long int var_3 = 12478245089418233476ULL;
unsigned char var_5 = (unsigned char)173;
long long int var_10 = 2642868127175428290LL;
unsigned long long int var_18 = 8031770145515915071ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)103;
long long int var_21 = -8089362510620426198LL;
unsigned short var_22 = (unsigned short)61943;
unsigned short var_23 = (unsigned short)61920;
unsigned char var_24 = (unsigned char)86;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)228;
short var_28 = (short)26985;
unsigned long long int var_29 = 2067636051522100496ULL;
unsigned char var_30 = (unsigned char)94;
unsigned short arr_3 [20] [20] ;
int arr_6 [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
unsigned char arr_11 [20] [20] [20] [20] ;
unsigned long long int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)32248;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1013800192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 14879495343016548095ULL : 12806693709669168214ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
