#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
unsigned long long int var_3 = 85819756290103477ULL;
signed char var_8 = (signed char)-21;
unsigned long long int var_9 = 6635085323718379173ULL;
unsigned char var_14 = (unsigned char)23;
unsigned char var_16 = (unsigned char)57;
unsigned int var_17 = 1188571748U;
int zero = 0;
unsigned char var_18 = (unsigned char)151;
long long int var_19 = -678289344803455181LL;
unsigned short var_20 = (unsigned short)53546;
signed char arr_1 [18] ;
unsigned char arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)8;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
