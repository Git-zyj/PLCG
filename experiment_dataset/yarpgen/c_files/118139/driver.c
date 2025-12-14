#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2515881431U;
unsigned long long int var_2 = 2698987322876641048ULL;
unsigned int var_12 = 978308434U;
int zero = 0;
unsigned long long int var_19 = 12686256429697678642ULL;
unsigned long long int var_20 = 7999357032689448052ULL;
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
