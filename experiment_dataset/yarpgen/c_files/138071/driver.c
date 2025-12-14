#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_1 = -2264205283014203853LL;
short var_3 = (short)-11783;
signed char var_4 = (signed char)106;
short var_5 = (short)20094;
long long int var_6 = 4641316983710321378LL;
unsigned short var_7 = (unsigned short)18958;
unsigned char var_8 = (unsigned char)121;
unsigned int var_9 = 959468350U;
int zero = 0;
unsigned char var_10 = (unsigned char)151;
unsigned char var_11 = (unsigned char)79;
unsigned short var_12 = (unsigned short)15355;
int var_13 = -1214901583;
unsigned int var_14 = 3162801159U;
int var_15 = -249822663;
unsigned int var_16 = 3311147927U;
long long int var_17 = -3463732691386097694LL;
signed char var_18 = (signed char)-118;
signed char var_19 = (signed char)28;
signed char var_20 = (signed char)14;
unsigned char var_21 = (unsigned char)134;
long long int var_22 = -2369973584968937905LL;
int var_23 = -5330631;
short arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
long long int arr_5 [17] [17] ;
_Bool arr_9 [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] ;
unsigned long long int arr_14 [17] [17] ;
unsigned int arr_18 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)13751;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 6585556402612442431ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -7010142135041941667LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4945270093926031312ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 2908607917081850870ULL : 571925283612637655ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 277642941U : 3113943368U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
