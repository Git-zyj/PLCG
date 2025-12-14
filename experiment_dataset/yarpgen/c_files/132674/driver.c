#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1343747352;
signed char var_1 = (signed char)15;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13112342860692320501ULL;
long long int var_6 = 1924629358202148332LL;
signed char var_7 = (signed char)-75;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6527343043603548947LL;
unsigned short var_10 = (unsigned short)24789;
int zero = 0;
int var_11 = -1950024711;
int var_12 = 226248318;
unsigned int var_13 = 748525229U;
int var_14 = -1347573600;
unsigned long long int var_15 = 1722547351220765853ULL;
int var_16 = 1050480385;
unsigned char arr_2 [17] ;
unsigned int arr_6 [17] ;
long long int arr_7 [17] [17] ;
_Bool arr_8 [17] [17] ;
signed char arr_9 [17] ;
unsigned long long int arr_16 [12] [12] [12] [12] ;
long long int arr_17 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3239799774U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 1799929564730492083LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12550983424101317178ULL : 526961854010665879ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2925639530448675528LL : -2434937512256167100LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
