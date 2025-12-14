#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16055214562687735209ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)56;
int zero = 0;
unsigned long long int var_20 = 3629951369669782812ULL;
unsigned short var_21 = (unsigned short)3354;
int var_22 = -998554537;
int var_23 = 1587116722;
unsigned char var_24 = (unsigned char)253;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
int var_27 = -127508149;
unsigned char var_28 = (unsigned char)35;
short arr_2 [16] ;
unsigned int arr_3 [16] ;
_Bool arr_7 [16] [16] [16] [16] ;
signed char arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-26476;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3236622840U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)121;
}

void checksum() {
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
