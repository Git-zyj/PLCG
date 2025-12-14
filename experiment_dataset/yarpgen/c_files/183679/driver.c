#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2;
long long int var_2 = -2673381279634560272LL;
long long int var_3 = 1397011701114287483LL;
unsigned long long int var_4 = 5787505700865112848ULL;
unsigned int var_6 = 3619320241U;
unsigned int var_8 = 512512814U;
short var_9 = (short)-31911;
short var_11 = (short)-18721;
int zero = 0;
short var_12 = (short)-17109;
short var_13 = (short)-7266;
unsigned long long int var_14 = 8834351599282337990ULL;
unsigned long long int var_15 = 8437177501106644933ULL;
long long int var_16 = 234284422900295265LL;
unsigned long long int var_17 = 13086711723687803331ULL;
unsigned long long int var_18 = 16204308868260634262ULL;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_4 [10] [10] ;
long long int arr_16 [13] ;
unsigned long long int arr_18 [13] ;
unsigned long long int arr_19 [13] ;
unsigned long long int arr_11 [10] [10] [10] [10] ;
long long int arr_12 [10] ;
unsigned short arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 13511883008920223395ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 7435334207689232709ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = -8789813868235642647LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 7656586046387056001ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 7956225396241511032ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2371079046976830442ULL : 1933611856315434639ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 7977576259559140210LL : 8162887128255953761LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned short)16383;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
