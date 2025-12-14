#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
long long int var_3 = -954154993246936696LL;
unsigned int var_8 = 685465391U;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned long long int var_14 = 17849059793009648993ULL;
unsigned long long int var_15 = 104267958124424914ULL;
short var_16 = (short)22889;
unsigned int var_17 = 2112658280U;
_Bool var_18 = (_Bool)0;
unsigned short arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)25033;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
