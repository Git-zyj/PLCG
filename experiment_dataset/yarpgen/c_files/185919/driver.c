#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7933758161721011233LL;
long long int var_1 = 3795471173738421124LL;
unsigned short var_2 = (unsigned short)619;
signed char var_3 = (signed char)79;
signed char var_5 = (signed char)10;
signed char var_7 = (signed char)-123;
unsigned long long int var_10 = 13000481390466950139ULL;
unsigned long long int var_11 = 13896089423189153097ULL;
int zero = 0;
short var_13 = (short)-26952;
unsigned short var_14 = (unsigned short)26723;
unsigned short var_15 = (unsigned short)786;
short var_16 = (short)-5048;
short var_17 = (short)24744;
long long int arr_2 [12] ;
unsigned short arr_3 [12] [12] [12] ;
int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 9033573457492454815LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)8736;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2127392891;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 10381643258866649001ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
