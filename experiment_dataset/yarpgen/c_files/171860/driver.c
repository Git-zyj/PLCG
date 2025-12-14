#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61215;
unsigned int var_5 = 2097982993U;
unsigned long long int var_9 = 17197465828639460155ULL;
long long int var_11 = -5505806761958022004LL;
unsigned char var_13 = (unsigned char)152;
long long int var_14 = -3649304556838750286LL;
int zero = 0;
int var_16 = -1297977206;
unsigned char var_17 = (unsigned char)110;
unsigned char var_18 = (unsigned char)104;
unsigned short var_19 = (unsigned short)52194;
signed char arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)189;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
