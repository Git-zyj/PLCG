#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4147144859U;
unsigned long long int var_5 = 8296667347543919898ULL;
unsigned int var_8 = 2529283142U;
unsigned long long int var_12 = 10270639081040085694ULL;
int zero = 0;
unsigned int var_19 = 2643380091U;
unsigned short var_20 = (unsigned short)15483;
void init() {
}

void checksum() {
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
