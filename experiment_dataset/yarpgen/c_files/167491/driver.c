#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)0;
short var_4 = (short)-9134;
_Bool var_5 = (_Bool)0;
unsigned int var_11 = 3139320126U;
int zero = 0;
unsigned char var_13 = (unsigned char)63;
unsigned int var_14 = 1439895641U;
unsigned int var_15 = 3244667114U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1955399982U;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
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
