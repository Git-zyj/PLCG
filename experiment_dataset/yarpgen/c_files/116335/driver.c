#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24306;
unsigned short var_1 = (unsigned short)39994;
short var_7 = (short)32751;
int zero = 0;
unsigned long long int var_11 = 14232033194649233762ULL;
signed char var_12 = (signed char)-68;
int var_13 = -756480670;
signed char var_14 = (signed char)-26;
unsigned char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)112;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
