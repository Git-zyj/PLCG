#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4938186244107526807LL;
unsigned char var_6 = (unsigned char)187;
unsigned long long int var_9 = 11493675850738376788ULL;
long long int var_11 = 8554827572393443638LL;
unsigned char var_12 = (unsigned char)77;
unsigned int var_16 = 4272748230U;
int zero = 0;
unsigned int var_19 = 2555168041U;
unsigned int var_20 = 2194659009U;
unsigned char var_21 = (unsigned char)100;
unsigned char var_22 = (unsigned char)183;
unsigned int var_23 = 3770805399U;
long long int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -4230869482551456847LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1192112714U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 179976575523768453ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
