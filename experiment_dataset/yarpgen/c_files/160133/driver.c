#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1595;
unsigned int var_1 = 2882283985U;
unsigned long long int var_2 = 10140648825871758245ULL;
unsigned short var_3 = (unsigned short)47550;
unsigned short var_4 = (unsigned short)2029;
signed char var_5 = (signed char)33;
unsigned short var_7 = (unsigned short)18662;
int var_8 = 886522301;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1990870642U;
int zero = 0;
unsigned int var_13 = 3926298149U;
unsigned short var_14 = (unsigned short)13908;
unsigned short var_15 = (unsigned short)17134;
unsigned long long int var_16 = 4677931109585358369ULL;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)22;
unsigned short var_19 = (unsigned short)31921;
unsigned short var_20 = (unsigned short)36818;
unsigned short var_21 = (unsigned short)7905;
unsigned int var_22 = 1513566050U;
signed char var_23 = (signed char)-80;
unsigned short var_24 = (unsigned short)10794;
unsigned char var_25 = (unsigned char)69;
unsigned short var_26 = (unsigned short)19898;
long long int arr_3 [17] [17] ;
short arr_4 [17] ;
short arr_6 [17] [17] ;
unsigned char arr_7 [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] [17] ;
unsigned int arr_9 [17] [17] [17] [17] ;
unsigned short arr_10 [17] [17] [17] [17] ;
unsigned char arr_11 [17] [17] [17] [17] [17] ;
unsigned char arr_12 [17] [17] [17] [17] [17] ;
unsigned int arr_13 [25] [25] ;
int arr_14 [25] [25] ;
unsigned int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 8848328796452602181LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)24444;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)19784;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 11827765718541630213ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3139551285U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 2972075584U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -1540214760;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 529106650U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
