#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13879033364544830113ULL;
_Bool var_3 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)57;
unsigned int var_13 = 3212208302U;
unsigned long long int var_14 = 16467715436084196197ULL;
short var_15 = (short)-6368;
int var_16 = -1306602769;
long long int var_17 = -1826467181698339037LL;
unsigned long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16907954823692476833ULL;
}

void checksum() {
    hash(&seed, var_11);
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
