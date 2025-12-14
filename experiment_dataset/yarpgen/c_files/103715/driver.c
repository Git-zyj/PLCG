#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 970391414U;
int var_1 = 1375444164;
unsigned short var_2 = (unsigned short)52456;
short var_3 = (short)8553;
signed char var_5 = (signed char)22;
unsigned long long int var_6 = 17320027954135782506ULL;
int var_9 = 652858154;
unsigned short var_10 = (unsigned short)20762;
unsigned int var_11 = 2756245973U;
signed char var_12 = (signed char)-52;
unsigned int var_13 = 2147553178U;
long long int var_14 = 1061656813023063429LL;
int zero = 0;
signed char var_15 = (signed char)-72;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6429107852267083444ULL;
unsigned int var_18 = 4041814481U;
unsigned short var_19 = (unsigned short)50446;
unsigned short var_20 = (unsigned short)59767;
signed char var_21 = (signed char)22;
unsigned int var_22 = 2414882220U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)26386;
long long int arr_14 [16] [16] ;
short arr_18 [16] ;
short arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = -535167177241423169LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (short)-30753;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (short)16451;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
