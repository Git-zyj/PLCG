#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1801807365;
unsigned short var_10 = (unsigned short)15674;
unsigned short var_11 = (unsigned short)16021;
long long int var_12 = -5543627446444697915LL;
_Bool var_14 = (_Bool)1;
int var_18 = 1680658992;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2140447502596054109LL;
unsigned char var_21 = (unsigned char)182;
int var_22 = 21604600;
unsigned char var_23 = (unsigned char)141;
_Bool arr_3 [23] [23] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -8996500175859819351LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
