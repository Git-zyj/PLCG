#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)769;
short var_5 = (short)-19634;
unsigned short var_8 = (unsigned short)4041;
int zero = 0;
short var_14 = (short)18260;
long long int var_15 = -7735411803775710744LL;
unsigned long long int var_16 = 15489014616545929814ULL;
unsigned char var_17 = (unsigned char)187;
long long int var_18 = 2057750717449952742LL;
long long int var_19 = 7160057006311102613LL;
unsigned long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2152705941792489851ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
