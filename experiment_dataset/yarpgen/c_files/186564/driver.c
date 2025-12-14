#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
_Bool var_5 = (_Bool)0;
int var_7 = 995930773;
short var_8 = (short)24585;
int var_9 = 874738931;
short var_10 = (short)1330;
int zero = 0;
unsigned long long int var_11 = 4278356067406472932ULL;
long long int var_12 = 2878740675819064750LL;
int var_13 = 1641788528;
unsigned int var_14 = 1910020581U;
unsigned int var_15 = 2461183220U;
short var_16 = (short)-6829;
unsigned int var_17 = 233420029U;
unsigned long long int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 7920119644476766232ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 18249243758430250728ULL;
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
