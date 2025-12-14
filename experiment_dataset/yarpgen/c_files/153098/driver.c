#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10477173274850300265ULL;
unsigned char var_8 = (unsigned char)61;
int zero = 0;
int var_12 = -1137996987;
unsigned long long int var_13 = 16531960767489118955ULL;
unsigned short var_14 = (unsigned short)6273;
long long int var_15 = -1430854331699765861LL;
int var_16 = 427434551;
unsigned char var_17 = (unsigned char)222;
unsigned char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)100;
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
