#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 7692980042508805493LL;
unsigned long long int var_14 = 1893877162045071913ULL;
unsigned int var_18 = 3908284459U;
int zero = 0;
long long int var_19 = -6667920428720531661LL;
int var_20 = -1828413908;
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
