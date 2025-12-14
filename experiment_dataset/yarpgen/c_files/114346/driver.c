#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
long long int var_1 = 6371515201225692370LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-85;
unsigned short var_4 = (unsigned short)50055;
unsigned int var_5 = 1003161778U;
_Bool var_11 = (_Bool)1;
int var_15 = 1161648037;
int zero = 0;
unsigned long long int var_16 = 9895959301467158963ULL;
short var_17 = (short)11165;
long long int var_18 = -4228069170732270538LL;
short var_19 = (short)-18331;
short var_20 = (short)2201;
unsigned int arr_0 [20] ;
unsigned short arr_2 [20] [20] [20] ;
unsigned short arr_3 [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 816841618U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)17039;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)24157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 6650958768552661227LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
