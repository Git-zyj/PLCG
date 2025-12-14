#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16458217603666744562ULL;
unsigned short var_3 = (unsigned short)21634;
unsigned short var_9 = (unsigned short)17703;
unsigned long long int var_10 = 15220872327347137894ULL;
unsigned short var_12 = (unsigned short)55883;
unsigned short var_14 = (unsigned short)38988;
int zero = 0;
unsigned short var_15 = (unsigned short)31010;
unsigned short var_16 = (unsigned short)55598;
unsigned long long int var_17 = 1413657031641902135ULL;
void init() {
}

void checksum() {
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
