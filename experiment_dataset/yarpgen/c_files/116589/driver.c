#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17658;
int var_2 = 1704007154;
unsigned long long int var_4 = 4271522802743192104ULL;
unsigned int var_10 = 3911805262U;
int zero = 0;
unsigned long long int var_13 = 13366773855342416616ULL;
short var_14 = (short)22661;
unsigned long long int var_15 = 10794452431234916108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
