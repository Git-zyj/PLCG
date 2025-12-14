#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31340;
short var_1 = (short)-28642;
int var_3 = -569201762;
short var_4 = (short)-11549;
signed char var_5 = (signed char)117;
signed char var_6 = (signed char)-13;
signed char var_7 = (signed char)120;
signed char var_8 = (signed char)48;
unsigned long long int var_9 = 13857963327060393346ULL;
signed char var_11 = (signed char)92;
int zero = 0;
signed char var_12 = (signed char)-89;
signed char var_13 = (signed char)-21;
signed char var_14 = (signed char)118;
signed char var_15 = (signed char)-124;
unsigned long long int var_16 = 16129861289443698491ULL;
unsigned int var_17 = 1115155157U;
signed char var_18 = (signed char)-54;
signed char var_19 = (signed char)-56;
unsigned int var_20 = 1107362267U;
unsigned long long int var_21 = 8733739192030188968ULL;
signed char var_22 = (signed char)-19;
int var_23 = -968038117;
unsigned int var_24 = 3909226664U;
unsigned int var_25 = 1028590441U;
int var_26 = 30401033;
unsigned int var_27 = 258484782U;
int var_28 = 1945589520;
int arr_1 [23] ;
short arr_2 [23] [23] ;
signed char arr_3 [23] [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
unsigned char arr_5 [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1277587952;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-29626 : (short)-22205;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-118 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2010375929U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7579615376456021320ULL : 2240498574744808418ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 486700140;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
