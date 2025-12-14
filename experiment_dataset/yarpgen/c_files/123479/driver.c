#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
unsigned char var_2 = (unsigned char)166;
unsigned char var_5 = (unsigned char)89;
unsigned long long int var_6 = 9954932738439864354ULL;
unsigned int var_16 = 506383624U;
signed char var_18 = (signed char)-78;
int zero = 0;
unsigned char var_20 = (unsigned char)145;
unsigned int arr_0 [24] ;
unsigned long long int arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2551019170U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4394988264357437644ULL : 1191468687109440608ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5230956584949441452LL : 8118463548319039267LL;
}

void checksum() {
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
