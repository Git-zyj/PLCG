#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4210840277054219271LL;
unsigned long long int var_7 = 9478235052020181484ULL;
long long int var_9 = 8477129480370274639LL;
unsigned long long int var_12 = 10503478782529351154ULL;
int zero = 0;
long long int var_17 = -3930505983065432076LL;
unsigned long long int var_18 = 13033185700199913486ULL;
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
