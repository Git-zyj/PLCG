#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17451188327345470195ULL;
unsigned int var_2 = 2374770965U;
unsigned int var_5 = 2864562741U;
unsigned short var_8 = (unsigned short)45183;
int var_9 = 604278371;
int var_12 = 1922402626;
unsigned long long int var_15 = 16036473017076529610ULL;
long long int var_17 = 6102384843601567830LL;
int var_18 = 322708031;
int zero = 0;
unsigned long long int var_20 = 2744576188080015954ULL;
int var_21 = 276709700;
unsigned int var_22 = 459521912U;
unsigned int var_23 = 3744370097U;
unsigned int var_24 = 3866111218U;
long long int var_25 = 7349024444377964578LL;
unsigned long long int arr_2 [16] [16] ;
unsigned long long int arr_3 [16] ;
unsigned int arr_6 [10] ;
unsigned short arr_4 [16] ;
unsigned int arr_5 [16] ;
unsigned long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 989605054350923999ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 15654600292126190046ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3650227567U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)30548;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 3005948236U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1590919643832857897ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
