#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2532273628U;
unsigned int var_4 = 1333928678U;
unsigned long long int var_7 = 16264947264615542827ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8572491932292694691ULL;
short var_10 = (short)-29146;
unsigned int var_11 = 1394305767U;
int zero = 0;
unsigned long long int var_12 = 12633503100465343627ULL;
unsigned long long int var_13 = 12515614799383588834ULL;
long long int var_14 = 8323909406575863040LL;
_Bool var_15 = (_Bool)0;
int var_16 = -2120836188;
unsigned long long int var_17 = 13470573407152826040ULL;
unsigned int arr_0 [23] ;
_Bool arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 275560953U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
