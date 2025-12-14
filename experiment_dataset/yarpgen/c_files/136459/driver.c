#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3656637082U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2123761382U;
int var_9 = 391254508;
unsigned long long int var_10 = 11853882847129930126ULL;
int zero = 0;
unsigned long long int var_11 = 5654098108293856157ULL;
_Bool var_12 = (_Bool)0;
int var_13 = -114369981;
short var_14 = (short)-8450;
int var_15 = -316685684;
long long int var_16 = -5671345425327819350LL;
_Bool var_17 = (_Bool)1;
signed char arr_1 [13] ;
_Bool arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
