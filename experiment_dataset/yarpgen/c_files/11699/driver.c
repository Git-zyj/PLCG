#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44306;
unsigned short var_5 = (unsigned short)6193;
int var_11 = -1235219147;
long long int var_14 = 5444949980121609126LL;
unsigned long long int var_16 = 10020989566311382861ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -556030813;
unsigned int var_19 = 82858274U;
int var_20 = 1920675465;
unsigned char var_21 = (unsigned char)113;
int var_22 = -2067686982;
unsigned int var_23 = 816673068U;
unsigned int var_24 = 2765566190U;
unsigned short arr_0 [22] ;
unsigned short arr_1 [22] [22] ;
unsigned int arr_3 [10] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)21948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13054 : (unsigned short)41119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3389881485U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)64713;
}

void checksum() {
    hash(&seed, var_18);
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
