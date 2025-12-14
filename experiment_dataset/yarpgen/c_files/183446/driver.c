#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1686439148U;
unsigned long long int var_3 = 12191933345244257271ULL;
int var_4 = -21114620;
unsigned short var_5 = (unsigned short)60634;
short var_6 = (short)19636;
signed char var_7 = (signed char)-59;
signed char var_9 = (signed char)78;
int zero = 0;
unsigned short var_11 = (unsigned short)3747;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8756103393354949294LL;
short var_14 = (short)8231;
unsigned short var_15 = (unsigned short)56882;
unsigned long long int var_16 = 18369387665499380796ULL;
long long int arr_3 [10] [10] ;
unsigned int arr_5 [10] ;
_Bool arr_6 [10] [10] [10] [10] [10] ;
unsigned int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1522955386220055174LL : -2483239826668802696LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2283983427U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2145364828U : 3604535843U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
