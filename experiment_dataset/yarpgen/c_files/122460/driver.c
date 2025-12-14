#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1628570863;
unsigned int var_9 = 1332158729U;
int var_13 = 1031969935;
long long int var_16 = 6339405601312892325LL;
unsigned char var_17 = (unsigned char)67;
int zero = 0;
long long int var_19 = -4828642281111371422LL;
unsigned int var_20 = 2591761606U;
unsigned long long int var_21 = 9782169395875341269ULL;
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
