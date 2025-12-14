#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10826661882987779311ULL;
unsigned long long int var_3 = 15708278005551908631ULL;
unsigned int var_5 = 3967834117U;
unsigned short var_12 = (unsigned short)50856;
unsigned short var_14 = (unsigned short)22740;
int zero = 0;
long long int var_15 = -2497176117031261694LL;
int var_16 = -1164075313;
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
