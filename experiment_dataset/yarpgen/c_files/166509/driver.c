#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28595;
unsigned short var_3 = (unsigned short)8712;
long long int var_4 = 8852899857301016134LL;
unsigned short var_5 = (unsigned short)39522;
unsigned long long int var_6 = 16400633127916986692ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)50070;
long long int var_11 = -7629032216961430428LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 609942056;
unsigned short var_14 = (unsigned short)41145;
int var_15 = 2028122615;
int var_16 = -594825226;
int var_17 = -1560319128;
unsigned int var_18 = 2271841665U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)73;
long long int var_21 = -6006934419331375351LL;
unsigned char var_22 = (unsigned char)12;
int var_23 = 2123316293;
short arr_0 [11] ;
int arr_5 [11] [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
signed char arr_9 [17] ;
unsigned char arr_10 [17] [17] ;
unsigned long long int arr_11 [17] ;
unsigned long long int arr_17 [15] ;
unsigned long long int arr_8 [11] ;
long long int arr_13 [17] ;
unsigned int arr_26 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-2080;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1774115308;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)5425;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 16008624008486209393ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 9696991748613770709ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 9306311913766260987ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -41236950214213659LL : 2213197995618793205LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = 1955213548U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
