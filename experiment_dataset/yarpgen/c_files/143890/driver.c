#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_8 = 2670943002U;
int zero = 0;
signed char var_15 = (signed char)102;
unsigned long long int var_16 = 17225686821444611421ULL;
unsigned short var_17 = (unsigned short)54180;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_5 [25] ;
signed char arr_2 [25] ;
unsigned int arr_3 [25] ;
unsigned int arr_12 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 13630412503330902255ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2613977349400687207ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2558907889U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1809629163U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
