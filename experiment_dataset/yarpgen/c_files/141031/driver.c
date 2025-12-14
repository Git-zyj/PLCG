#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 3644343286737791603ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10492318293898572249ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-96;
short var_10 = (short)30066;
unsigned long long int var_11 = 6330745799884070496ULL;
signed char var_12 = (signed char)-123;
signed char var_13 = (signed char)-123;
unsigned long long int var_14 = 18273546159598480741ULL;
signed char var_16 = (signed char)-36;
int zero = 0;
short var_17 = (short)-31842;
short var_18 = (short)-14976;
unsigned long long int var_19 = 13099243753504930272ULL;
short var_20 = (short)11194;
int var_21 = 618332633;
long long int var_22 = -3287461465594545648LL;
signed char var_23 = (signed char)-48;
long long int var_24 = 4420427532437831304LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -1360988676636619123LL;
_Bool arr_1 [21] [21] ;
unsigned long long int arr_5 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 11035408761608288117ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)87;
}

void checksum() {
    hash(&seed, var_17);
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
