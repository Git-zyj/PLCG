#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14303;
signed char var_1 = (signed char)-36;
short var_3 = (short)-3864;
signed char var_6 = (signed char)102;
short var_10 = (short)16279;
int zero = 0;
unsigned short var_11 = (unsigned short)35643;
long long int var_12 = -4196960313700621133LL;
short var_13 = (short)32225;
unsigned long long int var_14 = 12021127738690489003ULL;
long long int var_15 = 3193440592614994554LL;
unsigned int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2572067682U;
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
