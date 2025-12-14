#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
unsigned int var_5 = 2392523631U;
long long int var_9 = -991855046411098913LL;
int zero = 0;
signed char var_11 = (signed char)-108;
unsigned int var_12 = 1903813310U;
int var_13 = 92487019;
int var_14 = -1645452736;
unsigned long long int var_15 = 13807665866868010899ULL;
_Bool var_16 = (_Bool)1;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
