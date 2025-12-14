#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3021182853U;
unsigned short var_4 = (unsigned short)53359;
int var_6 = 459964511;
long long int var_11 = 5431503833872015175LL;
long long int var_12 = 7163973661185894602LL;
unsigned short var_14 = (unsigned short)11026;
unsigned short var_15 = (unsigned short)22977;
int zero = 0;
short var_18 = (short)-2403;
long long int var_19 = -5397928851540289051LL;
unsigned short var_20 = (unsigned short)28289;
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
