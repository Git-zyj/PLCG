#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17876932023401716195ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 150076269986133097ULL;
unsigned long long int var_18 = 12262746541897153921ULL;
int zero = 0;
unsigned long long int var_19 = 8224738391117595697ULL;
unsigned char var_20 = (unsigned char)147;
unsigned char var_21 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
