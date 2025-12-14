#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -448116599;
short var_2 = (short)-5502;
_Bool var_3 = (_Bool)0;
int var_6 = -69096825;
long long int var_7 = -8368237542070895873LL;
signed char var_9 = (signed char)46;
unsigned int var_11 = 2712737176U;
long long int var_12 = -2746283309046812900LL;
int zero = 0;
int var_13 = -1482699227;
unsigned short var_14 = (unsigned short)18836;
unsigned char var_15 = (unsigned char)178;
signed char var_16 = (signed char)-68;
unsigned char var_17 = (unsigned char)80;
unsigned int var_18 = 2723843752U;
long long int var_19 = 8188098004402321043LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned int arr_0 [22] ;
_Bool arr_4 [22] [22] ;
unsigned int arr_8 [22] ;
unsigned short arr_9 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3489992839U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2793869462U : 747407068U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)26932 : (unsigned short)43267;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
