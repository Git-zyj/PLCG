#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1637109618U;
int zero = 0;
unsigned short var_11 = (unsigned short)14009;
unsigned int var_12 = 145130106U;
long long int var_13 = -5499650467667883384LL;
int var_14 = 1890922015;
short var_15 = (short)-1322;
long long int var_16 = -1662050166592408086LL;
short arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_5 [17] ;
signed char arr_12 [22] ;
long long int arr_13 [22] [22] ;
unsigned short arr_14 [22] ;
signed char arr_2 [24] ;
unsigned short arr_3 [24] ;
short arr_6 [17] ;
unsigned int arr_10 [15] ;
unsigned char arr_15 [22] ;
long long int arr_16 [22] ;
unsigned char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)32685;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 12247459781979606565ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 407171140U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -9073724116506058485LL : -4274023049576873686LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)7401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)1299;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-11903;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2157339438U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 4905054710710918334LL : 6791029758092760402LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)228;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
