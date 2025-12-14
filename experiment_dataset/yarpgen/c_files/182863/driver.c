#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4268432801U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)52565;
signed char var_6 = (signed char)94;
int var_7 = 961531716;
unsigned short var_8 = (unsigned short)18419;
unsigned int var_9 = 1523235666U;
int zero = 0;
unsigned int var_12 = 3878798893U;
unsigned int var_13 = 1812119682U;
unsigned int var_14 = 3748524758U;
unsigned char var_15 = (unsigned char)41;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)239;
unsigned long long int arr_9 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8530640418086633372ULL : 15204736814478196156ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
