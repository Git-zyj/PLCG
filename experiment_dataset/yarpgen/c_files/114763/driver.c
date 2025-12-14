#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34443;
unsigned int var_2 = 939395932U;
unsigned short var_3 = (unsigned short)37166;
unsigned long long int var_7 = 2588558041361605103ULL;
int zero = 0;
unsigned long long int var_10 = 8420350083435998806ULL;
unsigned int var_11 = 900688409U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
