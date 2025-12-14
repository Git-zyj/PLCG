#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15806;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 699356440900483195ULL;
unsigned short var_15 = (unsigned short)12787;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-30942;
void init() {
}

void checksum() {
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
