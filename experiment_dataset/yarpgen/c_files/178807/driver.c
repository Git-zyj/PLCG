#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned int var_1 = 560880357U;
unsigned char var_3 = (unsigned char)191;
long long int var_6 = 2008681509378635435LL;
unsigned int var_8 = 2161641164U;
unsigned int var_11 = 341711973U;
unsigned short var_12 = (unsigned short)36103;
int var_13 = -1566465208;
signed char var_14 = (signed char)82;
unsigned int var_17 = 1384327228U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)214;
unsigned long long int var_21 = 7084635041622651646ULL;
unsigned long long int var_22 = 8845382174098271983ULL;
unsigned int var_23 = 1740122827U;
unsigned char var_24 = (unsigned char)251;
unsigned char var_25 = (unsigned char)224;
unsigned long long int arr_4 [10] [10] [10] ;
int arr_7 [10] [10] ;
_Bool arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 14427941588033707695ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 2146818357;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
