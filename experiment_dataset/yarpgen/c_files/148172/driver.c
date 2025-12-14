#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11080379209960206109ULL;
unsigned int var_6 = 37346453U;
short var_7 = (short)-15519;
signed char var_9 = (signed char)-121;
unsigned char var_11 = (unsigned char)156;
signed char var_12 = (signed char)126;
unsigned long long int var_14 = 8246162458701507020ULL;
unsigned int var_15 = 3719961972U;
signed char var_16 = (signed char)-38;
int zero = 0;
unsigned int var_17 = 1602564183U;
long long int var_18 = -7526760640196048666LL;
unsigned long long int var_19 = 6418563924817273270ULL;
signed char var_20 = (signed char)-49;
long long int var_21 = -2280626366953889503LL;
signed char var_22 = (signed char)-2;
long long int var_23 = -1298953350036603244LL;
unsigned int var_24 = 1337402612U;
short var_25 = (short)21291;
_Bool arr_1 [19] [19] ;
unsigned int arr_5 [19] ;
unsigned short arr_10 [19] [19] [19] ;
_Bool arr_12 [19] [19] [19] [19] ;
unsigned long long int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 294482503U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)46278;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 3924938534506878997ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
