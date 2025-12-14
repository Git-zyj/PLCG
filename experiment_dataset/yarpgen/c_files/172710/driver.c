#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28322;
short var_4 = (short)25191;
unsigned short var_7 = (unsigned short)22723;
signed char var_8 = (signed char)10;
unsigned char var_10 = (unsigned char)191;
signed char var_11 = (signed char)-107;
signed char var_12 = (signed char)99;
int zero = 0;
unsigned long long int var_17 = 6090729796654345583ULL;
signed char var_18 = (signed char)59;
unsigned long long int var_19 = 743636901334537314ULL;
long long int var_20 = -8857195715501105675LL;
long long int var_21 = 1926856587632630360LL;
short arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
long long int arr_4 [13] ;
signed char arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)3669;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)7134;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -3237902272818337625LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)122;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
