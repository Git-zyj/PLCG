#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32879;
long long int var_3 = 1727657659585871114LL;
short var_8 = (short)15895;
unsigned int var_9 = 1332989071U;
unsigned short var_10 = (unsigned short)24245;
unsigned int var_11 = 3760853504U;
unsigned short var_13 = (unsigned short)26059;
int var_15 = -1984465709;
int zero = 0;
short var_18 = (short)-26002;
unsigned long long int var_19 = 17292363173273856240ULL;
unsigned long long int var_20 = 13053829761887139491ULL;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
signed char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -810558895;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 14232628332347300520ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-125;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
