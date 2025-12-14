#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
short var_1 = (short)-12112;
unsigned int var_2 = 216205358U;
signed char var_3 = (signed char)-25;
unsigned short var_4 = (unsigned short)10993;
short var_5 = (short)25962;
short var_6 = (short)-10033;
unsigned int var_7 = 2662835730U;
unsigned int var_8 = 1682807915U;
unsigned long long int var_9 = 8595116396517613688ULL;
short var_10 = (short)20027;
unsigned int var_11 = 3032415304U;
short var_12 = (short)11945;
int var_13 = 242988128;
int zero = 0;
signed char var_14 = (signed char)70;
short var_15 = (short)2859;
short var_16 = (short)13745;
unsigned short var_17 = (unsigned short)3766;
signed char var_18 = (signed char)99;
short var_19 = (short)413;
short var_20 = (short)10685;
unsigned int var_21 = 2743481606U;
_Bool arr_0 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
int arr_4 [16] [16] ;
unsigned long long int arr_6 [16] ;
int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] [16] [16] ;
short arr_10 [16] [16] ;
unsigned long long int arr_22 [15] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_11 [16] [16] [16] [16] ;
unsigned short arr_12 [16] ;
signed char arr_13 [16] [16] [16] ;
short arr_14 [16] [16] ;
unsigned int arr_15 [16] ;
short arr_16 [16] ;
short arr_21 [15] [15] [15] ;
unsigned int arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 16972770726540930205ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -786273434;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 18257627866574613113ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 195709882;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7173154135617908312ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)24038;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 14386518203599600654ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 280392688185312761ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8386;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)34698;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-16520;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 1646113015U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (short)5869;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)27640;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 2436600769U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
