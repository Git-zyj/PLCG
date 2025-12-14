#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22280;
short var_8 = (short)4615;
long long int var_9 = -5287730717390137340LL;
unsigned int var_11 = 43236851U;
unsigned char var_13 = (unsigned char)165;
int zero = 0;
short var_19 = (short)-31436;
signed char var_20 = (signed char)109;
long long int var_21 = -3812006667787848987LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
