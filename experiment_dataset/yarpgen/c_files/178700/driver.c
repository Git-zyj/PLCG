#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1698387079204858102LL;
unsigned long long int var_8 = 6833637176599421481ULL;
unsigned long long int var_9 = 2529168024433198157ULL;
unsigned long long int var_10 = 6671860685815944605ULL;
int var_11 = -1572588382;
int var_15 = 1029650390;
int zero = 0;
unsigned long long int var_20 = 5880192418189913989ULL;
long long int var_21 = 635342336145463276LL;
unsigned long long int var_22 = 13557827285749133071ULL;
unsigned long long int var_23 = 17769093584922087957ULL;
unsigned long long int var_24 = 5943049899305576263ULL;
unsigned long long int var_25 = 10146093624083512291ULL;
long long int arr_2 [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2391228866293763483LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 9573394884590206274ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -7128898895032057215LL : -4034093225676486368LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
