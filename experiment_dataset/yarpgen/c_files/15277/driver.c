#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)106;
unsigned long long int var_5 = 5136840370129311488ULL;
long long int var_6 = -576300622328061707LL;
signed char var_7 = (signed char)47;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
long long int var_10 = -1565860511011205935LL;
long long int var_11 = 9160463077651808973LL;
_Bool var_12 = (_Bool)0;
int var_13 = -825659901;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_2 [21] ;
unsigned char arr_3 [21] [21] ;
signed char arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 17093613745173782023ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)90;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
