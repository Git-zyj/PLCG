#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35271;
int var_3 = 1249205169;
unsigned char var_9 = (unsigned char)251;
signed char var_11 = (signed char)105;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -621090133;
unsigned int var_17 = 4112120430U;
int var_18 = 698558075;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
