#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1878112295U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-94;
unsigned long long int var_4 = 659032810273772120ULL;
unsigned int var_5 = 1919078950U;
unsigned int var_6 = 815437576U;
unsigned long long int var_7 = 16501587879172510162ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)6756;
signed char var_12 = (signed char)79;
short var_13 = (short)24574;
unsigned int var_14 = 2867296614U;
long long int var_15 = 7704976717968011993LL;
signed char arr_0 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned char arr_4 [18] [18] ;
unsigned char arr_6 [17] ;
unsigned int arr_8 [17] [17] [17] ;
unsigned short arr_10 [17] [17] [17] ;
int arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 12066446755726807183ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2421884086U : 484233778U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)35245 : (unsigned short)58256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 713361264 : 332525820;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
