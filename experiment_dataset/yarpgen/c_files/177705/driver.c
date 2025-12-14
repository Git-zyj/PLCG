#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-32304;
int var_7 = -1696911427;
unsigned short var_10 = (unsigned short)35181;
int zero = 0;
unsigned long long int var_11 = 13474632248735763867ULL;
unsigned int var_12 = 1399471518U;
unsigned char var_13 = (unsigned char)219;
unsigned char var_14 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
