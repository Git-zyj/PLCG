#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1072799373;
unsigned long long int var_2 = 16294584441483316301ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 1646570603159521330ULL;
unsigned int var_14 = 2838449315U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2560453083148932003LL;
signed char var_21 = (signed char)-86;
int var_22 = 1903320678;
long long int var_23 = 4467579396103469722LL;
short var_24 = (short)-22947;
short var_25 = (short)-9406;
unsigned long long int var_26 = 5151438385320480214ULL;
_Bool arr_2 [12] [12] ;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3647351449966445176ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
