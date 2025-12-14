#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1808169139;
short var_2 = (short)13905;
unsigned long long int var_4 = 17967062255218190949ULL;
unsigned long long int var_7 = 13136404204986652264ULL;
unsigned char var_8 = (unsigned char)196;
unsigned long long int var_9 = 10167157246802340409ULL;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
unsigned char var_13 = (unsigned char)90;
int var_14 = 572689715;
unsigned char var_15 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
