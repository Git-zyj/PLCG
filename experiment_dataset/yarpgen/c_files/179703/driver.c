#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1598898885U;
unsigned short var_3 = (unsigned short)62623;
unsigned int var_4 = 1067118993U;
signed char var_5 = (signed char)25;
unsigned short var_7 = (unsigned short)57871;
unsigned char var_9 = (unsigned char)48;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 5679796884571796983ULL;
int var_12 = 674276270;
unsigned long long int var_13 = 13686227502101226900ULL;
unsigned char var_14 = (unsigned char)98;
unsigned long long int var_15 = 7557193192355937111ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)201;
short var_18 = (short)12540;
int arr_13 [15] [15] [15] ;
unsigned short arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1696554849 : 1442630028;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8958 : (unsigned short)9489;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
