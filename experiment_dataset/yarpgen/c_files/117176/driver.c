#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1266715756;
unsigned char var_2 = (unsigned char)230;
int var_3 = -1848909019;
unsigned char var_7 = (unsigned char)82;
unsigned int var_8 = 1184705678U;
unsigned long long int var_10 = 14104540701496581733ULL;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int var_17 = -142643130;
int zero = 0;
int var_18 = 2061551645;
signed char var_19 = (signed char)-55;
long long int var_20 = 377358313465121750LL;
int var_21 = 1089448339;
int var_22 = -851866202;
unsigned char var_23 = (unsigned char)159;
int arr_1 [15] ;
_Bool arr_3 [15] [15] [15] ;
signed char arr_4 [15] [15] [15] ;
long long int arr_7 [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] [15] ;
unsigned int arr_11 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 726784902;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1641934209581144249LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 10307637536484768717ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3758366127U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
