#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned char var_2 = (unsigned char)150;
signed char var_3 = (signed char)27;
unsigned long long int var_6 = 17976235534510682455ULL;
unsigned char var_7 = (unsigned char)186;
long long int var_8 = -6104121256266627329LL;
unsigned long long int var_9 = 14683528570219873508ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)64;
unsigned short var_13 = (unsigned short)37308;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] ;
unsigned int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3506140991457781684ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5306840802143852907ULL : 4747722559986509990ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1113275752U : 1114873939U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
