#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1230707452;
unsigned short var_10 = (unsigned short)22586;
signed char var_11 = (signed char)105;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -1462815584;
unsigned long long int var_16 = 7902644272980436566ULL;
long long int var_17 = -7156235633050635573LL;
short var_18 = (short)12626;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-27716 : (short)27668;
}

void checksum() {
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
