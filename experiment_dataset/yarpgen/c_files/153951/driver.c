#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
short var_1 = (short)13589;
short var_3 = (short)29826;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 1106260981U;
short var_11 = (short)16248;
unsigned long long int var_12 = 15051801708832884478ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)53093;
unsigned long long int var_14 = 8787868782967086958ULL;
short var_15 = (short)-8264;
long long int var_16 = 4359330286694014919LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
