#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1882782866;
_Bool var_4 = (_Bool)1;
long long int var_5 = 6746219012881683503LL;
unsigned long long int var_7 = 4670827425572220113ULL;
signed char var_8 = (signed char)71;
_Bool var_13 = (_Bool)0;
int var_16 = -798713082;
long long int var_17 = 7930629473189147993LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 1643898437109027383LL;
int var_20 = -865153595;
unsigned long long int var_21 = 4906297888291548367ULL;
unsigned long long int var_22 = 15284532299235396127ULL;
unsigned long long int var_23 = 9635515181408763236ULL;
long long int var_24 = -3648102809697750211LL;
long long int var_25 = 1172136612752824189LL;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -57556644;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
