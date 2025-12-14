#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8365375546860931119LL;
unsigned long long int var_2 = 9728211767737137647ULL;
unsigned char var_4 = (unsigned char)103;
_Bool var_5 = (_Bool)1;
short var_8 = (short)17687;
short var_9 = (short)21243;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 379791100U;
unsigned short var_17 = (unsigned short)40071;
unsigned short var_18 = (unsigned short)38548;
unsigned long long int arr_0 [25] [25] ;
unsigned int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 11021078123718440154ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3736727983U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
