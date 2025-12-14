#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1099308984660708711LL;
signed char var_9 = (signed char)122;
int zero = 0;
short var_15 = (short)4538;
long long int var_16 = -8228502559657797141LL;
unsigned long long int var_17 = 3731365272348795849ULL;
unsigned short var_18 = (unsigned short)57192;
unsigned short var_19 = (unsigned short)14087;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-27927;
long long int var_22 = 2501739916766583737LL;
signed char var_23 = (signed char)-99;
short var_24 = (short)19752;
_Bool var_25 = (_Bool)1;
unsigned short arr_0 [11] [11] ;
signed char arr_2 [11] ;
unsigned long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)35814 : (unsigned short)2620;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1220388875353293246ULL;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
