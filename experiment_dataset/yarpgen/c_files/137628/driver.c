#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8512914169535554486ULL;
short var_7 = (short)21603;
unsigned long long int var_12 = 9099187979101440402ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)247;
unsigned long long int var_15 = 4693392608664195036ULL;
unsigned long long int var_16 = 17678886752944100871ULL;
short var_17 = (short)20952;
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
