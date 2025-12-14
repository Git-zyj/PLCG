#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4524733706574434216ULL;
unsigned int var_10 = 3951491860U;
unsigned char var_12 = (unsigned char)174;
unsigned long long int var_18 = 18141902833594122332ULL;
int zero = 0;
unsigned long long int var_19 = 6959146394554866071ULL;
long long int var_20 = 8075100261061585662LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 59957859200094429ULL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4556782006564146798ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 294584198013049671ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
