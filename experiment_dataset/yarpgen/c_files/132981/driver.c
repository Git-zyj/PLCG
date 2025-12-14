#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1899972148;
signed char var_1 = (signed char)42;
unsigned long long int var_2 = 9922272329187730397ULL;
signed char var_5 = (signed char)-70;
short var_7 = (short)18444;
short var_9 = (short)-23002;
long long int var_10 = 7703212233363355464LL;
int zero = 0;
signed char var_11 = (signed char)89;
short arr_1 [10] ;
int arr_3 [10] [10] [10] ;
long long int arr_7 [10] ;
_Bool arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)23323;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -392303207;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 809269316728713024LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
