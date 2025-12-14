#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1973852507;
signed char var_2 = (signed char)26;
short var_3 = (short)-16266;
long long int var_4 = 1227451814280685788LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)108;
int var_8 = 1596927212;
unsigned long long int var_11 = 3914280145863228391ULL;
short var_12 = (short)-13012;
unsigned int var_16 = 3422622447U;
unsigned long long int var_17 = 6799864922880503887ULL;
int zero = 0;
unsigned long long int var_18 = 13325096598225166439ULL;
short var_19 = (short)-22260;
unsigned int var_20 = 3597971405U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
