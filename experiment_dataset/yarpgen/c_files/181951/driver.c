#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7196516331660977250LL;
int var_8 = -1674949822;
int var_14 = 1132445249;
unsigned int var_15 = 302171898U;
short var_18 = (short)30904;
int zero = 0;
unsigned long long int var_19 = 15922656921201789244ULL;
unsigned long long int var_20 = 8528144748821623723ULL;
long long int arr_5 [20] ;
int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1197223024422533187LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = -983779697;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
