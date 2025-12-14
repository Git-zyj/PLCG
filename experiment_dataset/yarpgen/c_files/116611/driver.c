#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2033542447;
unsigned short var_1 = (unsigned short)7580;
long long int var_3 = -5340924217839126263LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)53511;
unsigned short var_13 = (unsigned short)42091;
signed char var_14 = (signed char)84;
signed char var_15 = (signed char)-5;
unsigned char var_16 = (unsigned char)105;
short arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
signed char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20304;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-28;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
