#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 556460806U;
_Bool var_4 = (_Bool)1;
unsigned int var_9 = 1691050603U;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
unsigned short var_16 = (unsigned short)16085;
unsigned long long int var_17 = 2242492024156430508ULL;
unsigned long long int var_18 = 17316810443938045333ULL;
unsigned int arr_1 [17] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2426939272U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
