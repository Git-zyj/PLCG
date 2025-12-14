#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 660831801U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 200552905U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)37257;
signed char var_5 = (signed char)60;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)191;
_Bool var_10 = (_Bool)1;
int var_11 = -345210185;
int zero = 0;
unsigned int var_12 = 1154606485U;
unsigned long long int var_13 = 10870582154583268624ULL;
unsigned int var_14 = 365508293U;
unsigned int var_15 = 3880322897U;
unsigned char var_16 = (unsigned char)6;
unsigned long long int var_17 = 1323977485109818671ULL;
int var_18 = 265859113;
unsigned char var_19 = (unsigned char)189;
unsigned int arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3288784185U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)222;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
