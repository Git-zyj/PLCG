#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)218;
unsigned int var_3 = 1743593640U;
long long int var_5 = -2015075745138082072LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)217;
unsigned long long int var_9 = 10288471056004031653ULL;
int zero = 0;
unsigned int var_10 = 2051050629U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2398221338612199451LL;
unsigned int var_13 = 1537412248U;
long long int var_14 = 7954275198903221915LL;
signed char var_15 = (signed char)-88;
int var_16 = 251269966;
unsigned char arr_0 [12] ;
long long int arr_4 [12] [12] ;
_Bool arr_7 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4699922361211556479LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4669865822339759535ULL : 12614953475773249631ULL;
}

void checksum() {
    hash(&seed, var_10);
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
