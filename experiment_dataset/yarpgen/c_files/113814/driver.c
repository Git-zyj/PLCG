#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
long long int var_4 = -7573305495789213627LL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-63;
short var_8 = (short)15359;
int var_10 = 2045833886;
_Bool var_12 = (_Bool)1;
int var_13 = 1519608699;
int var_14 = -38101360;
int var_17 = 1646718305;
int zero = 0;
unsigned short var_18 = (unsigned short)26372;
long long int var_19 = 7712324017192930731LL;
unsigned long long int var_20 = 10563597985586686612ULL;
unsigned char var_21 = (unsigned char)183;
long long int var_22 = 4118371306302195059LL;
signed char arr_0 [22] ;
unsigned long long int arr_2 [22] [22] ;
long long int arr_3 [22] ;
unsigned char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 5896622941409845649ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -302521624823907718LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
