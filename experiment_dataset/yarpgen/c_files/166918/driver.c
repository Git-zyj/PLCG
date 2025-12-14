#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4134837516U;
int var_3 = -1718417559;
signed char var_4 = (signed char)-75;
unsigned char var_5 = (unsigned char)214;
unsigned long long int var_6 = 11838565633785334057ULL;
unsigned char var_8 = (unsigned char)27;
unsigned int var_9 = 3096822468U;
unsigned char var_10 = (unsigned char)182;
unsigned int var_12 = 908923964U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 15127145483739568111ULL;
unsigned short var_15 = (unsigned short)25414;
int zero = 0;
int var_16 = -1182841597;
unsigned int var_17 = 208335902U;
signed char var_18 = (signed char)-49;
unsigned short var_19 = (unsigned short)48977;
unsigned long long int var_20 = 14384080868526671389ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)27;
long long int var_23 = -6454026637871670383LL;
long long int var_24 = 2708775492286749627LL;
unsigned int var_25 = 4134596396U;
long long int var_26 = -6484065503928623213LL;
unsigned long long int var_27 = 6172792943464195022ULL;
signed char arr_0 [25] ;
unsigned int arr_1 [25] ;
signed char arr_2 [25] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] ;
_Bool arr_6 [17] ;
unsigned int arr_9 [16] ;
long long int arr_19 [20] ;
signed char arr_21 [20] ;
unsigned char arr_3 [25] ;
_Bool arr_17 [16] [16] [16] ;
unsigned long long int arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3726626848U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)13040;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 11206694774973176515ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 3638887351U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = -6885056450605669314LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 15895751726309086749ULL;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
