#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4734451103814587785LL;
unsigned int var_2 = 1287592160U;
unsigned long long int var_3 = 2747109181158611863ULL;
signed char var_4 = (signed char)104;
int var_5 = -1803114822;
signed char var_6 = (signed char)-96;
unsigned int var_7 = 709283492U;
unsigned int var_8 = 253460896U;
unsigned int var_9 = 965283210U;
short var_12 = (short)-18375;
unsigned int var_13 = 2266515141U;
unsigned int var_14 = 2941959285U;
long long int var_15 = 8873422638662517475LL;
unsigned int var_16 = 269240624U;
unsigned long long int var_17 = 13244738750626268002ULL;
int var_18 = 1648966600;
unsigned int var_19 = 191453377U;
int zero = 0;
unsigned int var_20 = 4210709378U;
unsigned short var_21 = (unsigned short)46362;
int var_22 = -497074731;
int var_23 = -1675735153;
short var_24 = (short)-16043;
signed char var_25 = (signed char)-47;
unsigned int var_26 = 236556547U;
short var_27 = (short)-18405;
signed char var_28 = (signed char)-116;
short var_29 = (short)28197;
_Bool arr_5 [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] ;
int arr_12 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 2555078778U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)94 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1935031934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1269678491U : 2895105088U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
