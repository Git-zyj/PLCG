#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11321;
short var_7 = (short)-26440;
unsigned int var_8 = 342521540U;
short var_9 = (short)-21277;
int zero = 0;
long long int var_10 = -2997572149823952678LL;
unsigned char var_11 = (unsigned char)212;
unsigned long long int var_12 = 9973699358283111484ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
