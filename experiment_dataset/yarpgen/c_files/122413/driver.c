#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned char var_2 = (unsigned char)102;
long long int var_5 = -8514219041736472537LL;
unsigned short var_6 = (unsigned short)37463;
unsigned long long int var_7 = 9306930165833413763ULL;
unsigned char var_8 = (unsigned char)108;
unsigned int var_9 = 1753210484U;
short var_12 = (short)-10550;
long long int var_14 = -1745113361784319406LL;
unsigned short var_15 = (unsigned short)36280;
unsigned short var_16 = (unsigned short)7340;
unsigned int var_17 = 2651023528U;
unsigned int var_18 = 3170859528U;
int zero = 0;
int var_20 = -283816330;
unsigned int var_21 = 3251103783U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-4927;
int var_24 = -42089990;
signed char arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_2 [22] [22] ;
unsigned int arr_4 [22] [22] ;
short arr_6 [22] [22] ;
unsigned short arr_7 [22] ;
unsigned short arr_8 [22] ;
long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)32208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 2475259066U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-31965;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)25451;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)51528;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 5518115651392785277LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
