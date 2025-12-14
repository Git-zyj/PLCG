#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)21926;
unsigned int var_2 = 4110679530U;
unsigned char var_3 = (unsigned char)13;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1575130755U;
unsigned long long int var_6 = 7624858586438637681ULL;
int var_7 = 1653046942;
unsigned int var_10 = 3621265264U;
signed char var_12 = (signed char)16;
int var_13 = -1532302470;
int zero = 0;
signed char var_14 = (signed char)101;
unsigned short var_15 = (unsigned short)34471;
int var_16 = -1703655505;
unsigned char var_17 = (unsigned char)219;
void init() {
}

void checksum() {
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
