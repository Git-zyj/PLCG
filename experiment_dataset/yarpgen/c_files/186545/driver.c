#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29250;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 13639955742287555710ULL;
signed char var_6 = (signed char)-5;
signed char var_8 = (signed char)67;
unsigned long long int var_10 = 10843690995878136483ULL;
int zero = 0;
unsigned long long int var_11 = 2271078270041632607ULL;
long long int var_12 = 5660123527883889052LL;
long long int var_13 = 349889066734641714LL;
_Bool var_14 = (_Bool)0;
_Bool arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)8686;
}

void checksum() {
    hash(&seed, var_11);
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
