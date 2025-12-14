#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)46073;
short var_2 = (short)-21978;
long long int var_5 = 5251685816625626900LL;
long long int var_7 = 3356356763743200710LL;
unsigned long long int var_10 = 10927398545342724002ULL;
unsigned long long int var_11 = 12982845830976039882ULL;
long long int var_16 = -3653953520234738258LL;
int zero = 0;
short var_18 = (short)21216;
short var_19 = (short)15590;
long long int var_20 = 5385288240024500338LL;
long long int var_21 = 1515833309958390846LL;
signed char var_22 = (signed char)-116;
_Bool arr_0 [25] [25] ;
int arr_2 [25] ;
unsigned short arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1100051296;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)3961;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
