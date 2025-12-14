#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -962984211893952300LL;
int var_4 = 1137827110;
long long int var_8 = 3454699538021167963LL;
unsigned int var_9 = 2335142365U;
long long int var_10 = 4888210004294380244LL;
int zero = 0;
unsigned long long int var_16 = 5346536373054969006ULL;
int var_17 = -1588621443;
long long int var_18 = -16149834215341512LL;
unsigned char var_19 = (unsigned char)226;
unsigned long long int var_20 = 7173653785295034632ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2247471287770500776ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 219093131U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
