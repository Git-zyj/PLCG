#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned int var_3 = 3062822628U;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-2462;
int var_7 = -1730749527;
unsigned int var_8 = 3238067954U;
_Bool var_9 = (_Bool)0;
long long int var_12 = 7499762574636871985LL;
int zero = 0;
unsigned char var_13 = (unsigned char)76;
long long int var_14 = 5679309632779279262LL;
int var_15 = -735331809;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2311643436U;
unsigned int var_19 = 219188508U;
unsigned char arr_4 [23] [23] ;
long long int arr_5 [23] [23] [23] [23] ;
long long int arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2189296647104454809LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1777047803042730713LL : -4813175559115609179LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
