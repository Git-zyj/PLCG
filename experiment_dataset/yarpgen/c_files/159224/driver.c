#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4258409618292380905LL;
long long int var_3 = 7947628624751168143LL;
signed char var_4 = (signed char)109;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 16033819589031065608ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_13 = 518507412;
long long int var_14 = 6338432081586094903LL;
int var_15 = -1975535499;
short var_16 = (short)20990;
_Bool arr_1 [22] [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3241854854U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
