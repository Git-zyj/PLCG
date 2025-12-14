#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4528649150921528749LL;
long long int var_1 = -4816498418235806105LL;
long long int var_5 = 724378233345550175LL;
long long int var_8 = 1247865029451814953LL;
long long int var_9 = -4401784662153336484LL;
long long int var_10 = -411115415024208127LL;
int zero = 0;
long long int var_11 = -3456876410961803314LL;
long long int var_12 = 5300475676522587036LL;
long long int var_13 = -4575265997429422284LL;
long long int arr_1 [10] ;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -2100028965586205175LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -3385803725764873062LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
