#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18200;
int var_4 = -123956285;
short var_7 = (short)28523;
unsigned int var_8 = 3063875203U;
unsigned long long int var_10 = 1695446035185597824ULL;
unsigned long long int var_11 = 7660327096877753774ULL;
unsigned short var_12 = (unsigned short)21502;
int zero = 0;
int var_13 = -193672090;
short var_14 = (short)-27557;
unsigned long long int var_15 = 9839985784773179943ULL;
unsigned long long int var_16 = 5883439224677544653ULL;
unsigned int arr_1 [19] ;
_Bool arr_3 [19] [19] ;
unsigned long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1480113270U : 434933204U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 219936654388354818ULL : 5066122582329835798ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
