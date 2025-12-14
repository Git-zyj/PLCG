#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57856;
long long int var_2 = 5498552267958059645LL;
unsigned short var_12 = (unsigned short)16851;
int zero = 0;
signed char var_17 = (signed char)-50;
int var_18 = -1925229292;
long long int var_19 = -7404893561098746863LL;
unsigned short var_20 = (unsigned short)25434;
unsigned long long int var_21 = 3202285814387605933ULL;
_Bool var_22 = (_Bool)0;
unsigned short arr_1 [10] ;
int arr_3 [11] ;
short arr_4 [11] ;
long long int arr_5 [16] ;
int arr_6 [16] ;
_Bool arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)41452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -722953661;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)27883;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1976859009871143945LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -355872645;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
