#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18170185449305309398ULL;
int zero = 0;
long long int var_11 = 900310806981038524LL;
long long int var_12 = 5703813106655932702LL;
long long int var_13 = -3713153637264832249LL;
unsigned long long int var_14 = 3467335172495771268ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)94;
long long int arr_6 [24] [24] [24] ;
unsigned short arr_10 [16] ;
unsigned short arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5575789530301886215LL : 8493690044263726913LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)18102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)61619;
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
