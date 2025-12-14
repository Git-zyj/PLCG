#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1248;
unsigned char var_3 = (unsigned char)151;
unsigned char var_4 = (unsigned char)23;
unsigned int var_5 = 3316866680U;
unsigned short var_8 = (unsigned short)42700;
unsigned long long int var_9 = 14595464024002624215ULL;
unsigned short var_10 = (unsigned short)54828;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)64824;
unsigned int var_14 = 4292371070U;
unsigned char var_15 = (unsigned char)107;
int zero = 0;
int var_18 = 642660126;
signed char var_19 = (signed char)-27;
unsigned int var_20 = 468534045U;
signed char var_21 = (signed char)28;
short var_22 = (short)27139;
unsigned long long int var_23 = 12449664308077398181ULL;
signed char var_24 = (signed char)-16;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)23017;
unsigned short var_27 = (unsigned short)62782;
unsigned long long int var_28 = 750757812207053020ULL;
signed char arr_4 [24] ;
unsigned char arr_11 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)198;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
