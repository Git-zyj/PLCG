#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 899574518;
short var_1 = (short)-2430;
short var_2 = (short)-10793;
unsigned long long int var_3 = 7457320990307054139ULL;
short var_6 = (short)-10408;
short var_8 = (short)-31297;
int var_9 = -445348942;
int zero = 0;
short var_11 = (short)23422;
short var_12 = (short)19895;
short var_13 = (short)-29770;
short var_14 = (short)3392;
short var_15 = (short)8439;
short var_16 = (short)30815;
short var_17 = (short)-19896;
short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
int arr_4 [18] ;
unsigned long long int arr_5 [18] ;
unsigned long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-21030;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 8038425901230205151ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1583016274;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 4196819396881040269ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 472267973753034696ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
