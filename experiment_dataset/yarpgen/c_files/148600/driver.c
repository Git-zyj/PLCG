#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 7313301822190480195LL;
short var_9 = (short)-16082;
short var_12 = (short)12079;
unsigned int var_16 = 3846484758U;
unsigned short var_17 = (unsigned short)5780;
int zero = 0;
short var_18 = (short)-8197;
short var_19 = (short)-32699;
long long int var_20 = 2945119196789999238LL;
signed char var_21 = (signed char)-30;
long long int var_22 = 8463564701646009816LL;
long long int var_23 = 860400323069810845LL;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -3191500778823140019LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 16678803005973586711ULL;
}

void checksum() {
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
