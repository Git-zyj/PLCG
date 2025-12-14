#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23407;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)5546;
unsigned long long int var_6 = 9285289085760326401ULL;
int var_8 = -1845501482;
long long int var_10 = -335003436191668275LL;
int var_11 = -204665717;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1793847554;
short var_16 = (short)-14579;
unsigned int var_17 = 3909236022U;
int var_18 = 1604815655;
signed char var_19 = (signed char)0;
short var_20 = (short)15961;
unsigned int var_21 = 2790476870U;
int var_22 = -1131646965;
unsigned long long int arr_2 [19] [19] ;
int arr_4 [19] [19] [19] ;
int arr_5 [19] ;
unsigned long long int arr_8 [19] ;
unsigned short arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 12188104876008650525ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 446054580;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -146678787;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 13533018308099031672ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29064 : (unsigned short)3271;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
