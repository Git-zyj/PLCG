#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2150590328U;
short var_7 = (short)29343;
unsigned char var_8 = (unsigned char)83;
short var_11 = (short)-13986;
int zero = 0;
long long int var_12 = -3835516715515750992LL;
unsigned long long int var_13 = 5909313544320863690ULL;
unsigned short var_14 = (unsigned short)2189;
signed char var_15 = (signed char)107;
signed char var_16 = (signed char)81;
unsigned long long int var_17 = 17403736876684651257ULL;
unsigned long long int var_18 = 7929909170583594063ULL;
int var_19 = 1053092231;
signed char arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)27;
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
