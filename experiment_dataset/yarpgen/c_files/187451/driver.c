#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8042073657613206582ULL;
unsigned long long int var_10 = 249182343881141847ULL;
int var_12 = -1051586234;
unsigned long long int var_13 = 18369406347747259392ULL;
unsigned short var_14 = (unsigned short)62945;
int zero = 0;
unsigned short var_15 = (unsigned short)13691;
unsigned long long int var_16 = 9824198387638252906ULL;
unsigned short var_17 = (unsigned short)54511;
int var_18 = 162126357;
int var_19 = 1189270633;
unsigned long long int arr_1 [18] [18] ;
int arr_7 [24] ;
unsigned short arr_8 [24] [24] [24] ;
int arr_9 [24] [24] [24] ;
short arr_10 [24] [24] [24] ;
unsigned long long int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 16311741002361200767ULL : 12227792162718923692ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 679576895;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)32296;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1935410441 : 991755688;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)21147;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 18249214923613090483ULL : 14810789977397246090ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
