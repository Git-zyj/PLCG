#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1868805018;
unsigned long long int var_2 = 4814656150294626521ULL;
unsigned int var_3 = 966670326U;
signed char var_4 = (signed char)-27;
unsigned char var_5 = (unsigned char)52;
signed char var_6 = (signed char)92;
signed char var_7 = (signed char)126;
unsigned short var_8 = (unsigned short)42262;
signed char var_10 = (signed char)-8;
unsigned char var_13 = (unsigned char)207;
long long int var_14 = -7994497097096194685LL;
int zero = 0;
int var_15 = -1820480291;
signed char var_16 = (signed char)-21;
signed char var_17 = (signed char)49;
void init() {
}

void checksum() {
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
