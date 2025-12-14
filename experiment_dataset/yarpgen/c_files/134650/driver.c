#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 987850118;
long long int var_6 = -4309189924253295120LL;
unsigned long long int var_15 = 8305561658241319674ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)20779;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3773505661244923816LL;
unsigned long long int var_19 = 12008667842417164437ULL;
_Bool var_20 = (_Bool)0;
unsigned short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)6728;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
