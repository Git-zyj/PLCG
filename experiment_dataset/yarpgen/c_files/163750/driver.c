#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3521159081U;
signed char var_2 = (signed char)31;
signed char var_4 = (signed char)76;
unsigned int var_6 = 1130016297U;
unsigned int var_7 = 992407769U;
signed char var_8 = (signed char)54;
unsigned int var_9 = 3922685137U;
unsigned int var_10 = 3013256278U;
int zero = 0;
signed char var_11 = (signed char)-9;
unsigned int var_12 = 3030333220U;
unsigned int var_13 = 939695367U;
unsigned int var_14 = 4101423858U;
unsigned int var_15 = 167287172U;
unsigned int var_16 = 840119923U;
unsigned int var_17 = 114678820U;
unsigned int var_18 = 3904932822U;
signed char var_19 = (signed char)126;
unsigned int arr_1 [22] ;
unsigned int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 813840722U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1977179002U;
}

void checksum() {
    hash(&seed, var_11);
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
