#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1554419852U;
short var_2 = (short)-23556;
int var_5 = -1106500760;
short var_6 = (short)-20613;
long long int var_7 = 9027671030119086120LL;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
unsigned int var_12 = 2734036199U;
unsigned int var_13 = 2269321814U;
long long int var_14 = 7925494950580424383LL;
short var_15 = (short)-24854;
long long int var_16 = 6276560559677798808LL;
long long int var_17 = -1934886201328295153LL;
unsigned char var_18 = (unsigned char)221;
short var_19 = (short)-7158;
short var_20 = (short)-26959;
long long int var_21 = 4099673318062841341LL;
short var_22 = (short)5891;
unsigned char var_23 = (unsigned char)124;
unsigned char var_24 = (unsigned char)130;
signed char var_25 = (signed char)112;
short arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned long long int arr_4 [25] ;
unsigned int arr_10 [12] ;
_Bool arr_18 [12] [12] [12] [12] ;
long long int arr_3 [25] ;
unsigned long long int arr_8 [25] ;
long long int arr_23 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-22281;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)44783;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3401858238U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1297562275286312188ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 4138451272U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 6622449610439962559LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 13467409262508452332ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 1971606845763107751LL : 6852412497328162976LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
