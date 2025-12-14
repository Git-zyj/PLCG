#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
_Bool var_2 = (_Bool)1;
int var_3 = -334495576;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-33;
long long int var_9 = -6794284612477540588LL;
signed char var_11 = (signed char)105;
int zero = 0;
unsigned long long int var_12 = 12917501324304526838ULL;
signed char var_13 = (signed char)-85;
unsigned long long int var_14 = 13760303849138389061ULL;
_Bool arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
