#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24968;
unsigned char var_1 = (unsigned char)228;
long long int var_4 = 8349114667631339770LL;
long long int var_7 = 42219846019596260LL;
unsigned char var_11 = (unsigned char)131;
long long int var_12 = 6679689911253710358LL;
short var_13 = (short)-14634;
int zero = 0;
long long int var_15 = 876184142763278910LL;
unsigned long long int var_16 = 14923597376986544953ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)250;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_1 [10] ;
signed char arr_3 [10] ;
unsigned long long int arr_5 [20] [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 16092138466986021796ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 15671390498843680847ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)24;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
