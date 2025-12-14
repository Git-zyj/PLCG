#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)79;
signed char var_3 = (signed char)-38;
signed char var_4 = (signed char)-114;
short var_6 = (short)-18148;
signed char var_7 = (signed char)-10;
int var_8 = -818779906;
long long int var_13 = -7658321433218652378LL;
signed char var_15 = (signed char)58;
int var_16 = 349567152;
int zero = 0;
signed char var_17 = (signed char)18;
int var_18 = 1472447006;
signed char var_19 = (signed char)19;
unsigned int var_20 = 2670087708U;
signed char var_21 = (signed char)-124;
long long int var_22 = -7185981871896050818LL;
signed char arr_1 [16] [16] ;
short arr_2 [16] ;
signed char arr_3 [19] ;
int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)27587;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -710733641;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
