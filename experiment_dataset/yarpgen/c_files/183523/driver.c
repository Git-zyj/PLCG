#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3633267680U;
long long int var_2 = -3757712285547953639LL;
long long int var_4 = -7008320832432087999LL;
unsigned short var_5 = (unsigned short)58028;
unsigned short var_6 = (unsigned short)48898;
unsigned long long int var_10 = 18147986971734875303ULL;
unsigned char var_11 = (unsigned char)75;
int zero = 0;
long long int var_13 = 5933748326501226844LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3896473004693483264LL;
int arr_0 [25] ;
long long int arr_1 [25] ;
int arr_2 [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1695051703;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3148075472309356564LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -198602456;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -7945200134226380721LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
