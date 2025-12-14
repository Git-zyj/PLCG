#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19778;
int var_3 = 1841059040;
int var_7 = 961266120;
int var_10 = -2024377158;
int zero = 0;
signed char var_11 = (signed char)109;
unsigned char var_12 = (unsigned char)108;
int var_13 = -1511853545;
int var_14 = 326846045;
int var_15 = -1012318;
int var_16 = 137719691;
signed char var_17 = (signed char)-3;
unsigned long long int var_18 = 5791478491172328047ULL;
short var_19 = (short)-22441;
long long int arr_0 [12] [12] ;
int arr_1 [12] ;
long long int arr_2 [12] ;
_Bool arr_5 [20] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3504877718340359305LL : 5809040836140827263LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1532873033;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1092959873993359267LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8095441488114637954LL : -4463846372760673839LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
