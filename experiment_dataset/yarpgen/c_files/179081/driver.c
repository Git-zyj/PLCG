#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-58;
long long int var_2 = 1332491958272138055LL;
long long int var_3 = 3243995337538546158LL;
unsigned short var_6 = (unsigned short)51658;
unsigned long long int var_8 = 6094650127936125735ULL;
unsigned short var_11 = (unsigned short)11816;
unsigned short var_14 = (unsigned short)13099;
int zero = 0;
long long int var_15 = 8663723594943331029LL;
long long int var_16 = -5396348990935365228LL;
unsigned short var_17 = (unsigned short)3151;
long long int var_18 = 3680629089134019571LL;
unsigned int var_19 = 101647912U;
unsigned int var_20 = 50131252U;
unsigned int var_21 = 762376617U;
long long int var_22 = -2951214456150125025LL;
unsigned int arr_0 [12] ;
short arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned int arr_4 [14] ;
unsigned long long int arr_5 [14] ;
unsigned long long int arr_3 [12] ;
short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2754173U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)12188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 289686986U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3855959958U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 5805274701366834328ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 6372814061606589080ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)21400 : (short)3649;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
