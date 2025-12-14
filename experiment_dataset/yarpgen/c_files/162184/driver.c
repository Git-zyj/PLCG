#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1978811100;
short var_5 = (short)19442;
short var_7 = (short)32250;
unsigned long long int var_9 = 7617738056033714121ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)14993;
short var_14 = (short)16255;
long long int var_15 = 3976570289013649964LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-100;
unsigned int var_18 = 134304222U;
unsigned char arr_0 [16] ;
signed char arr_1 [16] ;
int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1360141575;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
