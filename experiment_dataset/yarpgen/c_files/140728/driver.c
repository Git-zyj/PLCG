#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
unsigned char var_3 = (unsigned char)230;
unsigned int var_4 = 810822901U;
short var_8 = (short)-3728;
int zero = 0;
unsigned int var_10 = 2352830708U;
unsigned short var_11 = (unsigned short)41678;
int var_12 = -1182805450;
unsigned int var_13 = 3479452758U;
unsigned long long int arr_2 [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 10215142760552153044ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3967163665912558076LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 116695314U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
