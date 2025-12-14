#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 711981003;
unsigned long long int var_8 = 13681425290655578823ULL;
short var_9 = (short)-31416;
unsigned int var_11 = 1691139144U;
int zero = 0;
signed char var_13 = (signed char)0;
int var_14 = -353507318;
int var_15 = -104989197;
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
