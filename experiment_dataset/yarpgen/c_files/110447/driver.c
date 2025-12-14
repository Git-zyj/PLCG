#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 37329881;
int var_3 = 1113353806;
int var_6 = 1290945665;
unsigned int var_8 = 1568787327U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3462148977U;
signed char var_13 = (signed char)28;
unsigned long long int var_16 = 8976323487124283034ULL;
unsigned int var_17 = 2261485883U;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-3;
int var_21 = -1934095871;
_Bool arr_2 [22] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1917164838;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
