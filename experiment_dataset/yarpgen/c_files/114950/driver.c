#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15961486329645602144ULL;
unsigned char var_8 = (unsigned char)225;
unsigned int var_9 = 2147561712U;
int var_10 = -1705565694;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16723723665786513487ULL;
unsigned long long int var_15 = 11838663955935997050ULL;
unsigned char var_16 = (unsigned char)1;
unsigned int var_17 = 907244063U;
unsigned char arr_0 [20] [20] ;
signed char arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1387995630U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
