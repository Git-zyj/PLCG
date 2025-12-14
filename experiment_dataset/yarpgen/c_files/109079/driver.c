#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 43978808U;
unsigned int var_1 = 2533796085U;
signed char var_3 = (signed char)-39;
int var_4 = -549761546;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 10322019321574388934ULL;
long long int var_10 = 6305728694593509206LL;
unsigned long long int var_12 = 1279988057432861037ULL;
unsigned int var_13 = 1049086379U;
int zero = 0;
unsigned int var_17 = 4235257915U;
long long int var_18 = -607474341755941439LL;
signed char var_19 = (signed char)11;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-28417;
unsigned int arr_2 [14] [14] ;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3232731948U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-668;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
