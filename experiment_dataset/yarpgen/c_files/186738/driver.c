#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
int var_3 = -2118819666;
unsigned long long int var_5 = 2757815128235957475ULL;
unsigned long long int var_8 = 14467886575862151396ULL;
int zero = 0;
unsigned long long int var_15 = 1464500481932692554ULL;
unsigned int var_16 = 1525849488U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
