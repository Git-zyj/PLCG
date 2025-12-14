#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1983056269;
unsigned int var_1 = 529308609U;
unsigned long long int var_2 = 6313094468757850012ULL;
unsigned int var_4 = 13096727U;
unsigned int var_6 = 3349275989U;
short var_7 = (short)2779;
short var_9 = (short)-919;
int var_10 = -1174184980;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -819331249;
unsigned short var_14 = (unsigned short)35717;
signed char var_15 = (signed char)97;
_Bool var_16 = (_Bool)1;
int var_17 = 503528338;
int var_18 = -2038781989;
unsigned short var_19 = (unsigned short)62838;
unsigned int var_20 = 2991409056U;
int var_21 = -898558454;
unsigned int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned long long int arr_3 [10] [10] ;
_Bool arr_4 [10] ;
unsigned int arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3556431059U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 15098011911474290992ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1869362519U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
