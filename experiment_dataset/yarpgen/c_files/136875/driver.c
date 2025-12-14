#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1034507161;
int zero = 0;
int var_19 = 1520919469;
unsigned long long int var_20 = 13922204314165581703ULL;
unsigned long long int var_21 = 3771955551225533892ULL;
unsigned long long int var_22 = 8872711197774586117ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
