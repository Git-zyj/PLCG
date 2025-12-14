#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned int var_2 = 3451094554U;
signed char var_4 = (signed char)63;
long long int var_5 = 6507431095614426862LL;
signed char var_6 = (signed char)36;
long long int var_7 = 525978506338659312LL;
unsigned long long int var_9 = 9678406345877927244ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1072582006U;
unsigned char var_12 = (unsigned char)103;
int var_13 = -1315330115;
long long int arr_0 [18] ;
long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -697792663091203899LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 4622101707166902678LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
