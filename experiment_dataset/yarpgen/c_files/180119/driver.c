#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1782094667142855539LL;
signed char var_3 = (signed char)-43;
unsigned int var_6 = 4002449604U;
long long int var_8 = -2139479951211055377LL;
int var_9 = 1173485301;
unsigned int var_14 = 1359097377U;
int var_18 = -170516252;
int zero = 0;
unsigned long long int var_19 = 1411870137436162001ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = 162124252;
int var_23 = 1634285973;
unsigned char var_24 = (unsigned char)154;
unsigned long long int arr_0 [24] ;
unsigned short arr_2 [24] ;
short arr_3 [24] [24] [24] ;
long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2229054347493936152ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)19279;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-21823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -7759400171098935045LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
