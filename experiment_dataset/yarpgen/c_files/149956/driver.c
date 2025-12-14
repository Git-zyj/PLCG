#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4344333180831603937LL;
unsigned char var_1 = (unsigned char)140;
long long int var_2 = -3602206306908455232LL;
signed char var_3 = (signed char)32;
unsigned short var_4 = (unsigned short)33239;
unsigned long long int var_5 = 18010355581376747912ULL;
unsigned long long int var_6 = 7471274717790103637ULL;
unsigned long long int var_7 = 13677734296771909346ULL;
unsigned long long int var_8 = 8524133603793449049ULL;
short var_9 = (short)27686;
unsigned long long int var_11 = 3110644543749450161ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)214;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13701254837486014614ULL;
unsigned short var_15 = (unsigned short)32640;
_Bool var_16 = (_Bool)1;
long long int arr_1 [13] ;
unsigned short arr_4 [18] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5650475673679086917LL : 212636027733160148LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)18954;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)30;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
