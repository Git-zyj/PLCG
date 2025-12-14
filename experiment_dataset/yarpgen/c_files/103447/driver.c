#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12732399088090607078ULL;
long long int var_4 = 8815796559497187217LL;
long long int var_5 = -6653852184720001090LL;
int var_6 = 1635222034;
unsigned long long int var_8 = 2924856169406257422ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1417152009;
int zero = 0;
unsigned long long int var_11 = 7761829796441953854ULL;
signed char var_12 = (signed char)-114;
int var_13 = -619527352;
int var_14 = -520654674;
unsigned long long int var_15 = 2564032308198943147ULL;
signed char arr_0 [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)71;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
