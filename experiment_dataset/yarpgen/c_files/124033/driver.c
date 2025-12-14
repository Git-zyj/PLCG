#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -162616659;
signed char var_9 = (signed char)-115;
int zero = 0;
unsigned long long int var_12 = 1099298688359518196ULL;
unsigned long long int var_13 = 6277247606950718546ULL;
unsigned long long int var_14 = 13075730694407822896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
