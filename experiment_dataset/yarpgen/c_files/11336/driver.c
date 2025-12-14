#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11560;
unsigned long long int var_2 = 11759652029322687230ULL;
unsigned long long int var_4 = 3617097069851810888ULL;
unsigned long long int var_6 = 5531411452840738737ULL;
unsigned long long int var_9 = 8029110961112897090ULL;
signed char var_10 = (signed char)76;
unsigned char var_11 = (unsigned char)33;
unsigned short var_14 = (unsigned short)21144;
int zero = 0;
unsigned long long int var_15 = 14579066684119997266ULL;
unsigned long long int var_16 = 2844214602418215113ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)34;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
