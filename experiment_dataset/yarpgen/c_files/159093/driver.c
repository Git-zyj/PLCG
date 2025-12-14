#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13173680950683860081ULL;
signed char var_1 = (signed char)87;
int var_2 = -95628032;
unsigned long long int var_3 = 2795139652276951286ULL;
short var_8 = (short)22042;
unsigned long long int var_13 = 14395059978019556430ULL;
signed char var_15 = (signed char)-58;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10030158333082853441ULL;
unsigned long long int var_22 = 8458658404923561749ULL;
long long int var_23 = 9088601739231592187LL;
unsigned long long int var_24 = 16269904466897681420ULL;
unsigned long long int var_25 = 8138018036563037602ULL;
short var_26 = (short)-27278;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned long long int arr_10 [23] ;
unsigned int arr_16 [23] [23] ;
long long int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 9029897428736338422ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 10319983029049124506ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 15822986984680810852ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 2177571481U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -3898742128953232463LL : 8504650378707390576LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
