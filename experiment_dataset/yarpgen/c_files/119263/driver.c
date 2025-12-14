#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
signed char var_1 = (signed char)93;
long long int var_3 = 5793316236169086217LL;
unsigned long long int var_4 = 13546018908688106984ULL;
signed char var_8 = (signed char)-86;
long long int var_11 = -422153574307165795LL;
short var_13 = (short)1514;
short var_15 = (short)-12558;
int zero = 0;
unsigned short var_17 = (unsigned short)49101;
short var_18 = (short)14645;
unsigned char var_19 = (unsigned char)159;
_Bool var_20 = (_Bool)1;
int arr_0 [25] ;
int arr_1 [25] ;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 561028417;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 735401835;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-92;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
