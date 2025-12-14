#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
long long int var_1 = -5071155234930477025LL;
unsigned char var_2 = (unsigned char)86;
signed char var_4 = (signed char)69;
long long int var_6 = -4249014541019631661LL;
unsigned char var_7 = (unsigned char)173;
unsigned char var_8 = (unsigned char)157;
unsigned short var_9 = (unsigned short)5915;
int var_11 = 379245685;
unsigned long long int var_12 = 8645290858267288298ULL;
int var_13 = 2049974769;
int zero = 0;
unsigned int var_14 = 2218116247U;
unsigned int var_15 = 3344129711U;
unsigned char var_16 = (unsigned char)59;
long long int var_17 = 768745660212178616LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1225295840U;
unsigned long long int arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 15630247152707859553ULL : 8233853741500963447ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
