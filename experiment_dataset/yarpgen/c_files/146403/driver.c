#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
long long int var_6 = -722913336935061439LL;
short var_8 = (short)-24534;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)25;
int zero = 0;
unsigned int var_19 = 1672357626U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-10949;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)158;
short var_24 = (short)-15777;
long long int arr_3 [10] ;
short arr_6 [10] [10] [10] [10] ;
signed char arr_9 [19] ;
unsigned long long int arr_10 [19] ;
long long int arr_11 [19] ;
signed char arr_12 [19] ;
unsigned int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2847057150176352474LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)9834;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 12536709328830070649ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -2660678598158670130LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 868968019U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
