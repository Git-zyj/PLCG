#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 739679860;
int var_4 = -1039008832;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-21737;
unsigned char var_12 = (unsigned char)91;
long long int var_14 = 8213337561885432632LL;
int zero = 0;
long long int var_15 = -6219186264650547441LL;
unsigned long long int var_16 = 15357997209808321206ULL;
void init() {
}

void checksum() {
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
