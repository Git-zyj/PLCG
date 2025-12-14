#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6083619076854086249ULL;
unsigned short var_3 = (unsigned short)25940;
unsigned int var_4 = 1313365248U;
unsigned short var_6 = (unsigned short)43986;
unsigned int var_9 = 2631128663U;
int zero = 0;
unsigned short var_10 = (unsigned short)62413;
unsigned short var_11 = (unsigned short)51045;
unsigned short var_12 = (unsigned short)20307;
short var_13 = (short)31881;
unsigned long long int var_14 = 18347158192232648571ULL;
short var_15 = (short)-8282;
unsigned short var_16 = (unsigned short)3633;
unsigned char var_17 = (unsigned char)12;
unsigned int arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned int arr_4 [22] [22] ;
short arr_6 [22] [22] [22] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 863846836U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)41173;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)52310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 1439603318U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)30013;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47631 : (unsigned short)20312;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
