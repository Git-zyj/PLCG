#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 172772834;
unsigned short var_1 = (unsigned short)64400;
unsigned long long int var_4 = 663308543814175760ULL;
int var_7 = 974604128;
long long int var_8 = -5010232079819536881LL;
signed char var_9 = (signed char)88;
unsigned short var_11 = (unsigned short)37878;
int zero = 0;
long long int var_12 = -6598428744406689054LL;
signed char var_13 = (signed char)30;
long long int var_14 = -6610775346950886572LL;
_Bool arr_1 [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9906083982180407837ULL : 5302469119521728738ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
