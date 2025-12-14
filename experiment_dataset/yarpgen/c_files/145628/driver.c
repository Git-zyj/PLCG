#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 725070765483770753LL;
unsigned long long int var_3 = 2993201649242371781ULL;
unsigned int var_6 = 739157962U;
unsigned char var_10 = (unsigned char)225;
int zero = 0;
unsigned long long int var_19 = 988899499338566013ULL;
long long int var_20 = -8571840377443202222LL;
_Bool var_21 = (_Bool)1;
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
