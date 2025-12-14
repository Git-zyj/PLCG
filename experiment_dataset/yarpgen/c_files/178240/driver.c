#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56604;
unsigned short var_2 = (unsigned short)7290;
long long int var_4 = 5755903081512237049LL;
int var_5 = 159363606;
int var_7 = -1717306802;
unsigned short var_8 = (unsigned short)49385;
unsigned int var_9 = 1236706819U;
short var_10 = (short)7564;
int zero = 0;
unsigned short var_11 = (unsigned short)59916;
unsigned int var_12 = 1304606040U;
long long int var_13 = 4584232590196385431LL;
short var_14 = (short)23598;
long long int var_15 = -5143112213066811578LL;
signed char arr_0 [19] [19] ;
short arr_2 [19] ;
unsigned short arr_5 [19] [19] ;
unsigned int arr_3 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-464;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56684 : (unsigned short)13439;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 889304087U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)26606;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
