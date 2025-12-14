#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1258696655963599551LL;
unsigned long long int var_1 = 1560997971747120633ULL;
unsigned long long int var_3 = 13027926341482441960ULL;
long long int var_4 = -2942207712497755534LL;
signed char var_5 = (signed char)-109;
signed char var_7 = (signed char)59;
long long int var_9 = 4888967986666426692LL;
unsigned long long int var_12 = 10708786077685333678ULL;
unsigned long long int var_13 = 565509766140317515ULL;
int zero = 0;
unsigned long long int var_17 = 13201895365115584004ULL;
unsigned long long int var_18 = 17726840335995501667ULL;
long long int var_19 = -7429282307992373168LL;
unsigned long long int var_20 = 13265606183687227332ULL;
signed char var_21 = (signed char)13;
unsigned long long int var_22 = 7438586933179613395ULL;
signed char var_23 = (signed char)-22;
unsigned int var_24 = 2439251621U;
signed char var_25 = (signed char)-2;
unsigned int arr_0 [17] ;
long long int arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
unsigned long long int arr_3 [11] ;
signed char arr_5 [11] [11] ;
unsigned long long int arr_6 [11] [11] ;
unsigned long long int arr_11 [14] ;
long long int arr_12 [14] [14] ;
signed char arr_9 [10] ;
unsigned long long int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3547957982U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2733105763890502993LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4177173579U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 5435917208115287109ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 5628703679017083344ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 117050961342855975ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = -6772128034184605471LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2673466146223426181ULL : 13324226398874214805ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
