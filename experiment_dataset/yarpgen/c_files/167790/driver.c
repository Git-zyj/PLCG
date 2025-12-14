#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15832417011763950196ULL;
unsigned long long int var_2 = 11950352613001818916ULL;
unsigned long long int var_5 = 11827378689003641623ULL;
unsigned long long int var_6 = 10602347470346737598ULL;
unsigned long long int var_10 = 4542838492328911966ULL;
unsigned long long int var_12 = 14510994212738212047ULL;
unsigned long long int var_15 = 11494937469903875801ULL;
unsigned long long int var_16 = 508453729507601277ULL;
int zero = 0;
unsigned long long int var_18 = 14856420713332238346ULL;
unsigned long long int var_19 = 11681473066340399950ULL;
unsigned long long int var_20 = 7317883686387898862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
