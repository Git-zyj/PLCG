#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -167630364970682949LL;
unsigned long long int var_1 = 12110015380428657091ULL;
unsigned long long int var_4 = 13693569987147554449ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3003919104U;
unsigned int var_9 = 952195284U;
short var_10 = (short)-16568;
unsigned int var_13 = 2997423868U;
unsigned long long int var_14 = 14950106231375460832ULL;
unsigned int var_15 = 124600244U;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
unsigned int var_18 = 2000769525U;
signed char var_19 = (signed char)-1;
long long int arr_0 [17] ;
long long int arr_2 [17] [17] ;
long long int arr_5 [17] [17] ;
int arr_6 [17] ;
unsigned long long int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3616191255133932328LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -2669636190549708263LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 8042109067131287613LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -271868289 : -1606746900;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 15165900551751109482ULL : 17950918671231052685ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
