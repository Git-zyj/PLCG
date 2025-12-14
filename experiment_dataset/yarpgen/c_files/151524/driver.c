#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)34818;
unsigned long long int var_11 = 2790016513214727028ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 6857797739045292832ULL;
int var_18 = -206896006;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
