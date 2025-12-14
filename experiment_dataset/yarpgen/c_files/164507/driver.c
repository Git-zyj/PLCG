#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
unsigned int var_1 = 1113002120U;
long long int var_5 = 6905794628953257441LL;
unsigned long long int var_7 = 10635065645471599668ULL;
long long int var_10 = 4909367050212023628LL;
int var_11 = 762263777;
int zero = 0;
long long int var_15 = -4484963854962487113LL;
short var_16 = (short)16571;
long long int var_17 = 7602815296685572039LL;
signed char var_18 = (signed char)-13;
unsigned char var_19 = (unsigned char)118;
unsigned short var_20 = (unsigned short)17360;
int var_21 = -1747547562;
unsigned long long int var_22 = 1368223886779856928ULL;
unsigned short var_23 = (unsigned short)51057;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] ;
signed char arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2908552552487070449ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7017728615885687709LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)6563;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
