#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1386919994;
unsigned long long int var_5 = 6631610422101367355ULL;
unsigned char var_8 = (unsigned char)151;
unsigned int var_9 = 80139149U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = -1706020052;
int var_17 = -1787904473;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1121284540963167632LL;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 18338732480938359746ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
