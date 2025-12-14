#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 18270353596001422769ULL;
unsigned short var_4 = (unsigned short)53194;
long long int var_5 = -6217429575785533508LL;
unsigned char var_6 = (unsigned char)183;
unsigned int var_7 = 1704739553U;
unsigned long long int var_8 = 11519785708056786244ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 511156162;
unsigned char var_12 = (unsigned char)100;
long long int var_13 = -8738725154005590855LL;
unsigned int var_14 = 868517688U;
int zero = 0;
unsigned char var_16 = (unsigned char)34;
unsigned int var_17 = 9841597U;
_Bool var_18 = (_Bool)1;
int var_19 = 129478949;
void init() {
}

void checksum() {
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
