#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50593;
unsigned int var_10 = 1991648805U;
signed char var_14 = (signed char)49;
long long int var_15 = -4592594733262479952LL;
int zero = 0;
unsigned long long int var_17 = 16130532657225509404ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)4228;
unsigned long long int var_20 = 16377811576594126877ULL;
unsigned long long int arr_1 [22] ;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 14492330905395408021ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
