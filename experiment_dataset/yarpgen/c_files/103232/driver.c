#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1256836348159881773LL;
signed char var_1 = (signed char)-61;
unsigned int var_4 = 962379496U;
unsigned char var_5 = (unsigned char)146;
short var_6 = (short)-24896;
unsigned long long int var_7 = 12449406431573209283ULL;
unsigned long long int var_10 = 8057843455805975076ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
unsigned long long int var_13 = 3132970018564034595ULL;
unsigned long long int var_14 = 16852926817360816697ULL;
void init() {
}

void checksum() {
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
