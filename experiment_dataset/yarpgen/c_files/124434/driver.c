#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27957;
long long int var_2 = -291305510992851395LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 12140097454497798869ULL;
long long int var_6 = -4745174871505679789LL;
unsigned int var_7 = 2812189113U;
unsigned short var_9 = (unsigned short)15474;
long long int var_12 = 2650237713683137158LL;
unsigned int var_13 = 2762363399U;
long long int var_14 = -6152773784550865361LL;
signed char var_16 = (signed char)110;
short var_18 = (short)22674;
long long int var_19 = -6726753597947445651LL;
int zero = 0;
unsigned int var_20 = 1886458924U;
unsigned long long int var_21 = 17939527924562834143ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)70;
signed char var_24 = (signed char)-31;
unsigned int var_25 = 3842901878U;
unsigned int var_26 = 2603700799U;
unsigned short var_27 = (unsigned short)48257;
signed char var_28 = (signed char)-53;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)6617;
long long int var_31 = -7614950600307165573LL;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [22] [22] ;
long long int arr_3 [22] ;
short arr_4 [22] ;
signed char arr_7 [21] [21] ;
_Bool arr_8 [23] [23] ;
long long int arr_9 [23] ;
long long int arr_5 [22] ;
unsigned char arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 18250736600844570320ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 12202582410903214436ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 7189556823244984862LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-19063;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 999451748016023835LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -7720056854757703003LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)110;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
