#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
signed char var_2 = (signed char)86;
short var_3 = (short)5557;
long long int var_4 = -6705029639249506493LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 30953431U;
unsigned int var_7 = 1715691550U;
short var_9 = (short)-22729;
int zero = 0;
short var_10 = (short)22659;
long long int var_11 = 5668678040665795440LL;
short var_12 = (short)30218;
short var_13 = (short)10190;
signed char var_14 = (signed char)29;
long long int var_15 = 4810612986525141064LL;
long long int var_16 = -7017607604328718771LL;
long long int var_17 = 6977865793349308987LL;
long long int arr_0 [11] ;
signed char arr_2 [11] [11] ;
int arr_3 [11] [11] ;
short arr_4 [11] ;
long long int arr_5 [11] ;
signed char arr_10 [16] ;
int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1197366834242779573LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1991917761;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)25850;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 4149988915079624700LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 336247489 : -782979181;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
