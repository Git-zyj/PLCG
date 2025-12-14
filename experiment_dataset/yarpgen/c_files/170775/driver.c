#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11888;
unsigned long long int var_3 = 10320066789042245770ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)82;
int zero = 0;
signed char var_11 = (signed char)74;
signed char var_12 = (signed char)44;
unsigned int var_13 = 75384497U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1723800953U;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] ;
short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2577827898U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-14634;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
