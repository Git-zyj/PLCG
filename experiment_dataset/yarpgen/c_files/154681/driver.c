#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
int var_3 = 1618337855;
int var_6 = 1848119647;
unsigned long long int var_8 = 16215652270560701866ULL;
int var_11 = 1517496155;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 8541292765580532207ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -748233026;
unsigned long long int var_19 = 16404746294808419389ULL;
int arr_0 [12] ;
unsigned long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2113164731;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 5239740565416308388ULL;
}

void checksum() {
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
