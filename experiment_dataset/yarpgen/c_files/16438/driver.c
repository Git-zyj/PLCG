#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -3807234002002938497LL;
signed char var_4 = (signed char)-49;
int var_5 = 1043096230;
unsigned short var_8 = (unsigned short)7194;
unsigned int var_9 = 400766025U;
int var_13 = 625547728;
int zero = 0;
unsigned short var_15 = (unsigned short)1117;
long long int var_16 = -4545418571775618079LL;
unsigned int var_17 = 339724620U;
unsigned long long int var_18 = 14806207840875541664ULL;
int var_19 = -1867373245;
unsigned short arr_1 [13] ;
unsigned long long int arr_5 [23] ;
unsigned long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)10613;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 12877650321345897802ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 455456980917566893ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
