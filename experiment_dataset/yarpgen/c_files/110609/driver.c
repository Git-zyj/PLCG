#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_8 = 2914576494807850505LL;
long long int var_10 = 1224004155677064170LL;
unsigned short var_11 = (unsigned short)27685;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 4597077907105701765ULL;
int zero = 0;
unsigned int var_20 = 704461347U;
_Bool var_21 = (_Bool)0;
long long int var_22 = -3848212347286416977LL;
unsigned char var_23 = (unsigned char)194;
_Bool arr_1 [18] ;
long long int arr_2 [18] ;
long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -6063283091161343005LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1985667960625502778LL : -2522618080603573844LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
