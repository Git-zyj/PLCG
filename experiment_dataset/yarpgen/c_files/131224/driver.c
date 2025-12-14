#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13718562719726723018ULL;
int var_1 = 1291997806;
unsigned char var_2 = (unsigned char)242;
unsigned char var_3 = (unsigned char)183;
unsigned int var_4 = 908160571U;
unsigned long long int var_5 = 11049918808735114787ULL;
int var_6 = 1625697945;
short var_7 = (short)-19702;
unsigned short var_8 = (unsigned short)45640;
unsigned char var_9 = (unsigned char)251;
short var_10 = (short)-25555;
long long int var_11 = -339923415650972802LL;
short var_12 = (short)-3344;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4976358925475720115ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3716710310967540435LL;
unsigned long long int var_18 = 442660049157244021ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_2 [11] [11] ;
long long int arr_3 [11] [11] ;
signed char arr_4 [11] [11] [11] ;
_Bool arr_6 [11] [11] [11] ;
long long int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2569729108262357517ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 9167190219885639035LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8372408457026955334LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
