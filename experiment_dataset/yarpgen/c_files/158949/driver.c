#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3769829696U;
unsigned long long int var_3 = 11252153581999651120ULL;
unsigned char var_4 = (unsigned char)1;
unsigned long long int var_6 = 6732897431521345188ULL;
unsigned long long int var_8 = 768950281251506781ULL;
unsigned char var_9 = (unsigned char)176;
int var_10 = 180255523;
unsigned short var_11 = (unsigned short)16190;
unsigned long long int var_12 = 2692271364309111490ULL;
unsigned short var_13 = (unsigned short)23810;
unsigned char var_14 = (unsigned char)119;
int zero = 0;
unsigned char var_15 = (unsigned char)237;
int var_16 = -503155951;
unsigned int var_17 = 599078499U;
long long int var_18 = 162698429724948390LL;
long long int var_19 = -2001830238294932667LL;
unsigned short var_20 = (unsigned short)390;
unsigned long long int var_21 = 14657857213142424675ULL;
unsigned long long int var_22 = 2285177095390292440ULL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)2207;
signed char var_25 = (signed char)-81;
unsigned short var_26 = (unsigned short)26812;
long long int var_27 = 3585374741992417167LL;
unsigned short arr_0 [16] ;
_Bool arr_3 [20] ;
unsigned char arr_10 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_12 [20] [20] [20] [20] ;
unsigned short arr_17 [20] [20] [20] [20] [20] ;
unsigned long long int arr_20 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)10487;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)90 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)15052 : (unsigned short)36593;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 18074734330029336395ULL : 5408425602839550701ULL;
}

void checksum() {
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
