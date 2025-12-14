#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4678805492791956815LL;
unsigned long long int var_8 = 13330836652180054674ULL;
unsigned int var_10 = 3967610757U;
int zero = 0;
short var_16 = (short)-13229;
long long int var_17 = 1796501249328288222LL;
long long int var_18 = 8776246840953092788LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
