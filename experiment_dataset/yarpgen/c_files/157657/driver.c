#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
short var_3 = (short)-1578;
long long int var_5 = -5377019586629058723LL;
short var_6 = (short)28307;
long long int var_7 = 8611619938416745692LL;
long long int var_11 = 174108142024647361LL;
unsigned short var_12 = (unsigned short)49758;
int zero = 0;
unsigned long long int var_14 = 5661954199653820368ULL;
unsigned short var_15 = (unsigned short)60468;
unsigned short var_16 = (unsigned short)24073;
int var_17 = 78706722;
long long int var_18 = 2303716023538059960LL;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
signed char arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -7154782610744266293LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 7100184003436386135ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)97;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
