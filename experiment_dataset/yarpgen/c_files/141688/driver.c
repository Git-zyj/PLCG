#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -914820993;
long long int var_2 = 6509457782432684128LL;
unsigned int var_3 = 1068213155U;
short var_8 = (short)21145;
int zero = 0;
unsigned int var_11 = 3230000354U;
long long int var_12 = 6176028357495142921LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
