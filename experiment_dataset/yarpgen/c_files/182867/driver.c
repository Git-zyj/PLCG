#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2079802068937754956LL;
unsigned long long int var_2 = 9866543053780560718ULL;
unsigned char var_3 = (unsigned char)57;
unsigned long long int var_11 = 11815419249100697957ULL;
int zero = 0;
int var_12 = 852366374;
unsigned short var_13 = (unsigned short)51099;
unsigned long long int var_14 = 9599289996396537629ULL;
long long int var_15 = 7397724984391913989LL;
long long int var_16 = -8879181338255288069LL;
signed char var_17 = (signed char)118;
unsigned char var_18 = (unsigned char)71;
int var_19 = -1060346583;
unsigned long long int arr_0 [23] ;
signed char arr_2 [23] ;
_Bool arr_3 [23] ;
int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 12737646786014330714ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -328317873;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
