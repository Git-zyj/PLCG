#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 322949528U;
unsigned char var_2 = (unsigned char)241;
unsigned long long int var_5 = 13756290325380357148ULL;
long long int var_7 = 1363643957741586328LL;
long long int var_8 = -8874495133453721445LL;
unsigned long long int var_11 = 637838840744383015ULL;
unsigned char var_13 = (unsigned char)51;
int zero = 0;
unsigned long long int var_16 = 12286456920352177069ULL;
unsigned int var_17 = 1529291031U;
unsigned int var_18 = 1482492450U;
long long int var_19 = 1228323348386229354LL;
unsigned int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 269089295U : 3171398977U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
