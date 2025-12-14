#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4131504863U;
unsigned int var_4 = 322022514U;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-22839;
int zero = 0;
unsigned long long int var_16 = 13739406079748287254ULL;
unsigned long long int var_17 = 13923873567344481380ULL;
unsigned long long int var_18 = 229175520641617360ULL;
unsigned char var_19 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
