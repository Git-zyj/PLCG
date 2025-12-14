#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1437839867;
long long int var_5 = -7195228810747956780LL;
int var_12 = -38921730;
short var_16 = (short)30164;
signed char var_18 = (signed char)111;
int zero = 0;
int var_19 = -1275921711;
long long int var_20 = 603815780508628581LL;
signed char var_21 = (signed char)1;
unsigned long long int var_22 = 14064912911331814007ULL;
_Bool var_23 = (_Bool)1;
long long int var_24 = 6687111387196827230LL;
short arr_1 [22] ;
long long int arr_2 [22] ;
unsigned short arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)18721;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -5448426082498948426LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)26969;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
