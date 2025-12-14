#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50414;
int var_4 = 1699643310;
unsigned short var_6 = (unsigned short)14644;
int zero = 0;
unsigned long long int var_18 = 6759265109431150627ULL;
unsigned long long int var_19 = 14314960162342253523ULL;
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
