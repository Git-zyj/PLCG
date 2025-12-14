#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
unsigned int var_5 = 1705379771U;
int var_9 = 268267114;
long long int var_10 = -5742832998493129094LL;
unsigned int var_15 = 2726903278U;
unsigned char var_16 = (unsigned char)217;
unsigned int var_18 = 712540102U;
int var_19 = 1450836174;
int zero = 0;
unsigned short var_20 = (unsigned short)21228;
signed char var_21 = (signed char)41;
signed char var_22 = (signed char)80;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
long long int var_25 = -1546113867192629787LL;
signed char arr_0 [19] ;
long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4085594788125848193LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
