#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16161311970970300583ULL;
unsigned short var_10 = (unsigned short)44003;
short var_12 = (short)10823;
long long int var_13 = -564378638511649804LL;
unsigned short var_14 = (unsigned short)56979;
int zero = 0;
int var_20 = 1979203354;
int var_21 = -1540500092;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
