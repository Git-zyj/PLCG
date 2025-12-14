#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6647;
unsigned long long int var_1 = 11050693717551220602ULL;
unsigned long long int var_4 = 268507587423535717ULL;
short var_5 = (short)-27163;
unsigned long long int var_7 = 4591177009650640071ULL;
short var_9 = (short)-24534;
short var_10 = (short)-31899;
int zero = 0;
unsigned long long int var_11 = 4730685682406747490ULL;
short var_12 = (short)8813;
unsigned long long int var_13 = 6500362125965587861ULL;
unsigned long long int var_14 = 11931831839219946436ULL;
short var_15 = (short)-22962;
unsigned short var_16 = (unsigned short)0;
short arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
unsigned short arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-6103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)6263;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39090;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)64882;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
