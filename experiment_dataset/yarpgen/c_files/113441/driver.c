#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41430;
unsigned int var_3 = 2523384510U;
unsigned long long int var_7 = 13525255440248458092ULL;
unsigned long long int var_8 = 497839809556693505ULL;
unsigned int var_9 = 148208992U;
int zero = 0;
unsigned long long int var_10 = 6970222707144120894ULL;
unsigned long long int var_11 = 5573467559045800586ULL;
unsigned int var_12 = 2165594389U;
unsigned int var_13 = 908256660U;
short var_14 = (short)-13904;
unsigned short var_15 = (unsigned short)14960;
int arr_4 [20] ;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1824184387;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-1892 : (short)-11762;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
