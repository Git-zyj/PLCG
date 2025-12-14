#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 1313324205U;
long long int var_14 = 8681781587692352825LL;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
int var_17 = 817961305;
long long int var_18 = -1402087023025606135LL;
unsigned long long int var_19 = 10024674989299479266ULL;
signed char var_20 = (signed char)106;
long long int var_21 = 1408727631918041322LL;
int var_22 = 136219351;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [21] ;
long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 894082427119283059LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
