#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1759832712;
unsigned long long int var_5 = 7379540204913853328ULL;
int var_6 = -1473099700;
unsigned int var_10 = 282023929U;
unsigned long long int var_13 = 8367394612114332106ULL;
int zero = 0;
int var_14 = 1067067364;
unsigned short var_15 = (unsigned short)22517;
long long int var_16 = -7914718307235222662LL;
unsigned char var_17 = (unsigned char)44;
unsigned char var_18 = (unsigned char)160;
unsigned char var_19 = (unsigned char)186;
unsigned int var_20 = 2813138342U;
unsigned short var_21 = (unsigned short)14168;
unsigned long long int var_22 = 6651865199808943226ULL;
signed char var_23 = (signed char)64;
unsigned int arr_0 [15] [15] ;
short arr_2 [15] ;
unsigned int arr_10 [13] [13] ;
unsigned short arr_3 [15] ;
unsigned char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 672682947U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-23673;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 2074714565U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)32933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)43;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
