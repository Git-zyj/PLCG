#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15482;
unsigned short var_2 = (unsigned short)40707;
short var_7 = (short)-1852;
int zero = 0;
unsigned long long int var_10 = 13075212017495209390ULL;
unsigned long long int var_11 = 6156371624615813888ULL;
unsigned int var_12 = 2628111266U;
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
