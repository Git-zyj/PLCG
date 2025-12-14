#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)17512;
int var_8 = -2027446544;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-101;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)120;
unsigned long long int var_15 = 5011084710004632503ULL;
unsigned int arr_0 [25] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3925267363U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)126;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
