#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3698296116U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)28;
short var_11 = (short)-26065;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2219890607U;
int var_19 = -657134924;
unsigned short var_20 = (unsigned short)13917;
short var_21 = (short)8600;
short var_22 = (short)-25387;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 14776121427895260254ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
