#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17565;
unsigned long long int var_1 = 11310082764145194782ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3642693411131403546ULL;
short var_5 = (short)-26334;
unsigned long long int var_6 = 6252824763633533864ULL;
unsigned int var_7 = 489800223U;
signed char var_8 = (signed char)107;
signed char var_9 = (signed char)-33;
short var_10 = (short)-1553;
signed char var_11 = (signed char)-125;
int zero = 0;
short var_12 = (short)-12616;
unsigned int var_13 = 3268833423U;
unsigned int var_14 = 260176607U;
short var_15 = (short)18889;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)17708;
unsigned short var_18 = (unsigned short)18726;
signed char var_19 = (signed char)-73;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)4048;
signed char arr_1 [21] [21] ;
short arr_4 [21] [21] [21] [21] ;
short arr_5 [21] [21] [21] [21] ;
unsigned int arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)-24259;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-18428;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1032836305U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
