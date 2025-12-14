#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -656386813;
short var_2 = (short)-10819;
signed char var_3 = (signed char)-126;
unsigned int var_5 = 687118086U;
short var_6 = (short)-8372;
unsigned long long int var_7 = 17895989389023155386ULL;
signed char var_9 = (signed char)-10;
long long int var_10 = -2415853198833483759LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 17138726060222454098ULL;
long long int var_17 = -627530964886398165LL;
unsigned char var_18 = (unsigned char)29;
int zero = 0;
unsigned long long int var_19 = 6124259800021751375ULL;
long long int var_20 = -2876519003379898817LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15271889123670137893ULL;
unsigned long long int var_23 = 8541085262764247481ULL;
unsigned long long int var_24 = 7884161605796866741ULL;
int var_25 = -2143114476;
long long int var_26 = -3838756549138548600LL;
unsigned long long int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
unsigned long long int arr_2 [21] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 16238433758919700802ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3482670557348966142ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
