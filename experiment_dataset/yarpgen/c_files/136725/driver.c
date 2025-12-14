#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -243833983;
short var_1 = (short)-1992;
short var_4 = (short)23533;
short var_5 = (short)-9842;
unsigned short var_7 = (unsigned short)14107;
int var_9 = -935345952;
unsigned short var_10 = (unsigned short)6910;
int zero = 0;
unsigned short var_11 = (unsigned short)32433;
unsigned int var_12 = 1398404109U;
unsigned int var_13 = 3507454675U;
unsigned short arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
unsigned long long int arr_2 [25] ;
int arr_3 [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46403;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)36554;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 17497252325296567262ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1729915570;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)31887;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
