#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
unsigned int var_3 = 1331748477U;
int var_5 = 499973493;
unsigned int var_6 = 1158672659U;
unsigned char var_8 = (unsigned char)83;
unsigned char var_13 = (unsigned char)177;
unsigned long long int var_14 = 2454525418547000127ULL;
unsigned short var_15 = (unsigned short)23700;
signed char var_16 = (signed char)41;
int zero = 0;
unsigned char var_18 = (unsigned char)228;
long long int var_19 = 8499522986629832994LL;
unsigned int var_20 = 993316017U;
long long int var_21 = 7948481556861655903LL;
unsigned int arr_0 [13] ;
_Bool arr_2 [13] ;
unsigned long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1334598382U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5435689078018051048ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
