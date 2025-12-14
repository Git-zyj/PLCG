#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1328665891;
unsigned char var_4 = (unsigned char)67;
unsigned char var_10 = (unsigned char)203;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_19 = -7848048690277321330LL;
short var_20 = (short)-30688;
signed char var_21 = (signed char)-7;
int var_22 = -1350873424;
unsigned long long int var_23 = 6282177413414628937ULL;
_Bool arr_0 [16] [16] ;
int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -430341529;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
