#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1555603049;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)202;
int var_5 = 1110521238;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 14746804818268050677ULL;
int zero = 0;
int var_10 = -634492133;
signed char var_11 = (signed char)23;
unsigned char var_12 = (unsigned char)177;
unsigned char var_13 = (unsigned char)54;
_Bool arr_0 [11] ;
int arr_1 [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1298323460;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
