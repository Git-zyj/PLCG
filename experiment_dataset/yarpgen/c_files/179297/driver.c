#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10865747756297155787ULL;
unsigned short var_1 = (unsigned short)62628;
_Bool var_2 = (_Bool)1;
long long int var_3 = -1440359149780694862LL;
unsigned char var_4 = (unsigned char)150;
long long int var_5 = -1570887211351142133LL;
unsigned int var_6 = 1600791635U;
long long int var_7 = -3944443426205474606LL;
long long int var_8 = 1226009566143207933LL;
signed char var_9 = (signed char)103;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -250223564;
unsigned int var_12 = 3663263794U;
unsigned int var_13 = 2088351055U;
unsigned char var_14 = (unsigned char)253;
signed char var_15 = (signed char)70;
signed char arr_5 [22] ;
unsigned short arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)26 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)41360 : (unsigned short)52891;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
