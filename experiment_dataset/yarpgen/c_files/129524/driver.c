#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9772529701922770986ULL;
int var_7 = 1279397449;
unsigned long long int var_8 = 10610539439542002873ULL;
int var_9 = -1639906122;
unsigned short var_10 = (unsigned short)5645;
signed char var_11 = (signed char)109;
unsigned long long int var_12 = 8235746398265620519ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
short var_14 = (short)-12230;
int var_15 = -1726279955;
short var_16 = (short)-10654;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
