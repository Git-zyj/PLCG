#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17622512953097979250ULL;
unsigned long long int var_1 = 9076282489285538633ULL;
unsigned long long int var_2 = 2676440063835990617ULL;
unsigned long long int var_4 = 12514523977344575777ULL;
int var_7 = 401205531;
int zero = 0;
unsigned long long int var_14 = 18109582455680122281ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
