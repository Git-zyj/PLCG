#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45503;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5389593430015113763LL;
unsigned long long int var_4 = 10139069579040802884ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_10 = -1808026865;
long long int var_12 = -9082579558246268755LL;
unsigned short var_13 = (unsigned short)19150;
int zero = 0;
unsigned long long int var_15 = 11282970427656665454ULL;
unsigned short var_16 = (unsigned short)11442;
unsigned int var_17 = 1608509236U;
short var_18 = (short)-2535;
long long int var_19 = 6019300567196171969LL;
unsigned short var_20 = (unsigned short)43975;
_Bool var_21 = (_Bool)0;
_Bool arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 10858028917400592LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)166;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
