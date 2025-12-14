#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5960;
int var_2 = -502101267;
unsigned int var_4 = 1263399633U;
unsigned int var_5 = 1259974284U;
unsigned long long int var_7 = 16188478235835923468ULL;
long long int var_8 = -8734586081697505470LL;
unsigned short var_11 = (unsigned short)8585;
signed char var_12 = (signed char)-98;
int zero = 0;
unsigned short var_14 = (unsigned short)10753;
signed char var_15 = (signed char)88;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)113;
unsigned short arr_2 [24] [24] ;
unsigned short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)12204;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)42934;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
