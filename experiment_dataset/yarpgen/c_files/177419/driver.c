#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1514477455;
int var_2 = -2093853082;
long long int var_3 = 4310718791777902595LL;
int var_4 = 1223826494;
int var_5 = 781244651;
long long int var_7 = 972270607622506336LL;
short var_8 = (short)-21142;
int zero = 0;
short var_10 = (short)-1473;
unsigned int var_11 = 555643213U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
