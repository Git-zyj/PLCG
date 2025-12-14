#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned char var_2 = (unsigned char)24;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)183;
long long int var_5 = 1052384269904768518LL;
signed char var_6 = (signed char)21;
unsigned char var_7 = (unsigned char)250;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)6;
unsigned long long int var_11 = 3794441727143935816ULL;
unsigned char var_12 = (unsigned char)139;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)50;
unsigned long long int var_17 = 13553251076567621134ULL;
signed char var_18 = (signed char)47;
int var_19 = -1796007343;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 14557882150065202785ULL;
int var_22 = 1925282137;
int var_23 = -1427824712;
unsigned long long int var_24 = 1232363047834760197ULL;
signed char arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
_Bool arr_3 [20] [20] ;
unsigned char arr_4 [20] ;
unsigned char arr_7 [20] [20] ;
_Bool arr_9 [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
_Bool arr_15 [19] [19] ;
_Bool arr_17 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 2540937191279577959ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 17424261155834184440ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
