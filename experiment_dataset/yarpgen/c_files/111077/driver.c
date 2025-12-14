#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3231825866938011295LL;
long long int var_1 = -3889336109996285223LL;
long long int var_6 = -8357736120835256303LL;
int var_7 = -1559922567;
unsigned int var_8 = 2271941185U;
short var_9 = (short)-25672;
int var_10 = -1979821283;
long long int var_11 = -4970201946308985032LL;
unsigned char var_13 = (unsigned char)152;
unsigned short var_14 = (unsigned short)33209;
unsigned short var_15 = (unsigned short)36763;
unsigned short var_16 = (unsigned short)4271;
unsigned short var_17 = (unsigned short)28688;
int zero = 0;
unsigned long long int var_18 = 346963549614173918ULL;
unsigned long long int var_19 = 8427472101939411924ULL;
short arr_3 [11] ;
short arr_4 [11] [11] ;
_Bool arr_8 [11] [11] ;
unsigned int arr_6 [11] ;
unsigned long long int arr_11 [11] ;
_Bool arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-22098;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)6513;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4153783350U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8775850737227461612ULL : 563944215542396373ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
