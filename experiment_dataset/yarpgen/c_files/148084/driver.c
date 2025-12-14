#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7448637929325862792ULL;
unsigned long long int var_4 = 5217662682724092631ULL;
unsigned int var_7 = 877282175U;
int zero = 0;
unsigned int var_10 = 3288401941U;
unsigned short var_11 = (unsigned short)6632;
long long int var_12 = 4710355330197584919LL;
unsigned int arr_0 [21] ;
unsigned int arr_2 [21] ;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 4205893323U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1896957960U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-39;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
