#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -3503784043188782283LL;
unsigned long long int var_17 = 14120615512185432437ULL;
int zero = 0;
long long int var_18 = -4051130844916468063LL;
unsigned long long int var_19 = 3296420165789027218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
