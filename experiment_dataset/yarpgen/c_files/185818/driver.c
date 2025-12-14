#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2716599435U;
signed char var_5 = (signed char)115;
short var_10 = (short)-29207;
int zero = 0;
unsigned short var_11 = (unsigned short)55544;
long long int var_12 = 9040952303957595606LL;
short var_13 = (short)-351;
unsigned short var_14 = (unsigned short)46244;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -3353465635830928410LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
