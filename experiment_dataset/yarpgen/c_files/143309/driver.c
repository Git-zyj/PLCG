#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned char var_2 = (unsigned char)211;
unsigned char var_3 = (unsigned char)148;
long long int var_9 = -5353101926243902422LL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4079343276U;
int zero = 0;
short var_16 = (short)23659;
unsigned short var_17 = (unsigned short)38546;
unsigned char var_18 = (unsigned char)143;
unsigned char var_19 = (unsigned char)172;
unsigned int var_20 = 4132688492U;
unsigned long long int var_21 = 18362765745766545816ULL;
signed char var_22 = (signed char)-52;
unsigned char arr_0 [21] [21] ;
signed char arr_1 [21] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -8089168640682814065LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
