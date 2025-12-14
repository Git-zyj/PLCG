#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9297;
long long int var_4 = -4408202009168240829LL;
unsigned long long int var_5 = 16449438776838998967ULL;
long long int var_8 = 3846964666923974143LL;
signed char var_15 = (signed char)-1;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5705138067607352641LL;
long long int var_20 = -5650280148220787095LL;
unsigned long long int var_21 = 6374040643472476069ULL;
signed char arr_0 [11] ;
unsigned short arr_2 [11] [11] ;
_Bool arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)53451;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
