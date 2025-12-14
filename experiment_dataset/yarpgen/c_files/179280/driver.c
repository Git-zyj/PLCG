#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)86;
long long int var_5 = 7272787560732026388LL;
unsigned char var_7 = (unsigned char)208;
signed char var_8 = (signed char)105;
unsigned char var_9 = (unsigned char)139;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = -1829477309;
unsigned char var_18 = (unsigned char)131;
short var_19 = (short)29965;
long long int var_20 = 4532423148167625025LL;
int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1297595946;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
