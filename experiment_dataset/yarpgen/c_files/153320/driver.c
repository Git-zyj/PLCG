#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6826604546079178098LL;
signed char var_1 = (signed char)27;
signed char var_2 = (signed char)90;
signed char var_4 = (signed char)-18;
unsigned long long int var_5 = 10728925794476751519ULL;
unsigned int var_6 = 3217283912U;
unsigned char var_7 = (unsigned char)165;
unsigned int var_8 = 2652222719U;
unsigned char var_9 = (unsigned char)12;
unsigned int var_10 = 2478434907U;
unsigned long long int var_12 = 4308287546769112177ULL;
int zero = 0;
unsigned int var_13 = 2087298499U;
long long int var_14 = -7679516152568599655LL;
unsigned int var_15 = 81930265U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2981853123U;
long long int arr_2 [25] [25] ;
_Bool arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8969982374665120365LL : -4028210031348731986LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
