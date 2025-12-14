#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17269435011463920501ULL;
unsigned char var_1 = (unsigned char)232;
unsigned long long int var_3 = 16347117016171715599ULL;
int var_5 = 1470826573;
unsigned char var_6 = (unsigned char)21;
unsigned short var_8 = (unsigned short)41854;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 44944556U;
unsigned int var_19 = 1370392742U;
signed char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)8 : (signed char)113;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
