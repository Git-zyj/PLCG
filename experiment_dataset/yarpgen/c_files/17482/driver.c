#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7528558519569634743ULL;
int var_2 = 2075003204;
unsigned short var_3 = (unsigned short)47037;
long long int var_6 = -1324563366056754360LL;
unsigned int var_8 = 2216668425U;
unsigned char var_9 = (unsigned char)38;
short var_10 = (short)15158;
int zero = 0;
short var_11 = (short)12683;
unsigned char var_12 = (unsigned char)117;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-27538;
signed char var_15 = (signed char)40;
unsigned int var_16 = 1610072879U;
unsigned int var_17 = 615414654U;
long long int var_18 = -7947741460991892981LL;
int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_7 [18] ;
unsigned char arr_3 [18] [18] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1250954972;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9202638089436338931ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)16946;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-41;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
