#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3933686424608023588LL;
int var_4 = -1663827397;
unsigned long long int var_5 = 12212684104627516351ULL;
short var_11 = (short)-2909;
int zero = 0;
short var_15 = (short)-21993;
unsigned char var_16 = (unsigned char)229;
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
