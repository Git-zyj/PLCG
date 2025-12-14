#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2678162992243184534LL;
unsigned short var_9 = (unsigned short)24631;
int var_10 = -496497173;
int zero = 0;
unsigned long long int var_20 = 10660260015714063970ULL;
short var_21 = (short)-4274;
unsigned long long int var_22 = 15319506915981990903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
