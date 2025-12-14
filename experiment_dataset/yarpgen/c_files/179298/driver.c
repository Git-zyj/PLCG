#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25318;
unsigned long long int var_2 = 1987177125441273246ULL;
long long int var_3 = -7484268304690337335LL;
unsigned long long int var_4 = 12880346262343117876ULL;
unsigned char var_5 = (unsigned char)170;
int var_6 = -451272416;
int var_7 = -1460130473;
short var_8 = (short)14222;
unsigned char var_10 = (unsigned char)109;
long long int var_11 = 8925557879186642731LL;
int zero = 0;
long long int var_13 = -8828450347206079309LL;
unsigned int var_14 = 1651378133U;
unsigned int var_15 = 3837504560U;
signed char var_16 = (signed char)53;
unsigned int var_17 = 678616333U;
short var_18 = (short)-16423;
unsigned int var_19 = 2167742774U;
short var_20 = (short)21887;
short var_21 = (short)-20157;
unsigned int arr_0 [24] [24] ;
short arr_4 [24] ;
_Bool arr_6 [24] [24] [24] [24] ;
_Bool arr_7 [24] [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_12 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 401170503U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-26418;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)17977;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)189;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
