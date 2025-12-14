#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
int var_3 = -185849356;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2778879306U;
unsigned int var_10 = 1341315385U;
int zero = 0;
unsigned char var_13 = (unsigned char)52;
int var_14 = -1021055978;
unsigned short var_15 = (unsigned short)26556;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1593010441;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 9489821710446652304ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)19411;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
