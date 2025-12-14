#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18067713355899576940ULL;
unsigned char var_3 = (unsigned char)54;
unsigned char var_10 = (unsigned char)196;
int zero = 0;
unsigned long long int var_13 = 10990498259370355101ULL;
unsigned long long int var_14 = 7932539397425498476ULL;
unsigned long long int var_15 = 3764703188085040492ULL;
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
