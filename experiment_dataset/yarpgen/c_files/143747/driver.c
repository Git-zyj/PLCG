#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 258315980;
_Bool var_1 = (_Bool)0;
int var_2 = -852228436;
unsigned short var_5 = (unsigned short)13871;
short var_9 = (short)-1589;
unsigned long long int var_11 = 6194710884772559076ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 4160668612U;
unsigned int var_14 = 547233633U;
unsigned int var_15 = 1778320795U;
unsigned char var_16 = (unsigned char)66;
short var_17 = (short)-31037;
unsigned char arr_1 [24] ;
int arr_2 [24] ;
_Bool arr_3 [24] [24] ;
unsigned long long int arr_4 [24] ;
long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1801086632;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6689214582077668470ULL : 15880678362550896234ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5994242465135359130LL : -5066560012137625489LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
