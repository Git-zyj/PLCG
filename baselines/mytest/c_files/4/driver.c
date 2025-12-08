#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 17756485U;
unsigned char var_6 = (unsigned char)95;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)80;
_Bool var_13 = (_Bool)0;
int var_14 = -1499077856;
unsigned int var_15 = 3557900010U;
long long int var_18 = -1471491332272461998LL;
int zero = 0;
unsigned int var_19 = 1709960711U;
unsigned int var_20 = 367169977U;
signed char var_21 = (signed char)122;
unsigned char var_22 = (unsigned char)29;
_Bool arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1991677999U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
