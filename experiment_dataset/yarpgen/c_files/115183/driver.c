#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2731670393646306954LL;
unsigned short var_4 = (unsigned short)51213;
unsigned int var_5 = 3465883635U;
unsigned int var_6 = 4018637082U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16025238334305750509ULL;
signed char var_9 = (signed char)-61;
short var_10 = (short)13194;
unsigned long long int var_12 = 6968574605201422840ULL;
int var_13 = 254421724;
long long int var_14 = 2913216815607168759LL;
short var_15 = (short)5890;
int zero = 0;
unsigned char var_16 = (unsigned char)96;
unsigned long long int var_17 = 3816416620840319480ULL;
long long int var_18 = 5799627759290789300LL;
unsigned long long int var_19 = 3814207368540338442ULL;
int var_20 = -1018522448;
unsigned long long int arr_7 [23] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3365588572137310749ULL : 11635431420789983330ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 5729809742352556059ULL : 11375172130923309229ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
