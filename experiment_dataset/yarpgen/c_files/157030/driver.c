#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 576615072;
short var_3 = (short)21048;
unsigned long long int var_8 = 3344483265886134491ULL;
unsigned int var_9 = 4085546679U;
int zero = 0;
unsigned long long int var_16 = 12160951104099989260ULL;
unsigned int var_17 = 309486029U;
unsigned long long int var_18 = 14040147739301669301ULL;
unsigned char var_19 = (unsigned char)157;
unsigned char var_20 = (unsigned char)242;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 14200917157580689318ULL;
unsigned char arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] [14] [14] ;
signed char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 13855360392172988545ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 12244290789766032957ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-115;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
