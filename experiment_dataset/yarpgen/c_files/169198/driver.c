#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2554332061203130235LL;
unsigned int var_3 = 481788495U;
unsigned long long int var_8 = 3199464955958999074ULL;
unsigned long long int var_9 = 10632753684490270841ULL;
long long int var_10 = 5584505135440251885LL;
unsigned int var_12 = 646907228U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)20544;
void init() {
}

void checksum() {
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
