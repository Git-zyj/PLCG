#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13278602935382665363ULL;
signed char var_6 = (signed char)-87;
unsigned short var_9 = (unsigned short)11246;
int zero = 0;
unsigned long long int var_13 = 13033161243228466843ULL;
unsigned short var_14 = (unsigned short)3478;
unsigned long long int var_15 = 8314292082371565940ULL;
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
