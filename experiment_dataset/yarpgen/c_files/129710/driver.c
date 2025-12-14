#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 755396044464607655LL;
signed char var_1 = (signed char)36;
unsigned short var_2 = (unsigned short)41242;
unsigned long long int var_3 = 16194283684155134753ULL;
unsigned short var_5 = (unsigned short)49531;
long long int var_6 = -5142970173563008502LL;
signed char var_7 = (signed char)110;
long long int var_9 = -1380175468298717652LL;
long long int var_10 = 5339994947452011144LL;
unsigned int var_11 = 3328963466U;
unsigned long long int var_12 = 9100446225740208504ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)38528;
unsigned char var_15 = (unsigned char)4;
short var_16 = (short)7654;
unsigned int var_17 = 2572083066U;
signed char var_18 = (signed char)-53;
unsigned int var_19 = 4061989377U;
long long int arr_0 [25] [25] ;
short arr_3 [25] ;
signed char arr_7 [25] ;
int arr_2 [25] ;
int arr_10 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1238484724401399951LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)12737;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1062523664;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 508700808;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
