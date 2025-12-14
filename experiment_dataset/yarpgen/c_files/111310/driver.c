#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
signed char var_2 = (signed char)14;
signed char var_4 = (signed char)-121;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)82;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-90;
signed char var_11 = (signed char)11;
unsigned char var_13 = (unsigned char)251;
int zero = 0;
signed char var_14 = (signed char)-125;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)0;
unsigned char var_17 = (unsigned char)88;
signed char var_18 = (signed char)-23;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-5;
signed char arr_0 [13] [13] ;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)49;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
