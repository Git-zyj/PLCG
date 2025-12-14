#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 257018401211822060LL;
unsigned char var_1 = (unsigned char)106;
int var_3 = -1485878296;
unsigned char var_4 = (unsigned char)144;
unsigned int var_5 = 4053430203U;
short var_6 = (short)-31538;
unsigned int var_7 = 2517156034U;
unsigned long long int var_9 = 11441269924907354173ULL;
unsigned int var_12 = 1380073799U;
int zero = 0;
unsigned int var_13 = 601502275U;
short var_14 = (short)-3994;
unsigned int var_15 = 2043112495U;
int var_16 = 364954226;
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
