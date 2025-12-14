#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1259839810;
unsigned long long int var_5 = 5822158335819856697ULL;
int zero = 0;
unsigned long long int var_10 = 13743545575638229054ULL;
int var_11 = -63223752;
unsigned long long int var_12 = 5264452891010126333ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
