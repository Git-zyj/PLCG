#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
unsigned long long int var_2 = 10019280482236540811ULL;
unsigned int var_9 = 3407901509U;
int zero = 0;
unsigned long long int var_12 = 13349461190797672797ULL;
long long int var_13 = -9079161703468443069LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
