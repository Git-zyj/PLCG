#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3158743126436150144LL;
long long int var_10 = -3586056638591200659LL;
unsigned char var_11 = (unsigned char)167;
long long int var_12 = 136088434944962110LL;
unsigned char var_13 = (unsigned char)80;
unsigned char var_17 = (unsigned char)25;
unsigned short var_18 = (unsigned short)64059;
int zero = 0;
unsigned char var_19 = (unsigned char)154;
_Bool var_20 = (_Bool)1;
int var_21 = 176157190;
int var_22 = 959143809;
int arr_1 [20] ;
int arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 500578887;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -332557818;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)18301;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
