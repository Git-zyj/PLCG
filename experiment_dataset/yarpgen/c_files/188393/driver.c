#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned char var_2 = (unsigned char)50;
unsigned char var_4 = (unsigned char)191;
unsigned long long int var_7 = 356354295721101799ULL;
signed char var_9 = (signed char)77;
signed char var_11 = (signed char)100;
unsigned int var_12 = 80351726U;
unsigned long long int var_15 = 12657714847408709632ULL;
short var_16 = (short)-22671;
int zero = 0;
long long int var_18 = 8746302777901036913LL;
short var_19 = (short)22920;
unsigned long long int var_20 = 3102606551657283532ULL;
long long int var_21 = 8417192622674841320LL;
int var_22 = -1782520129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
