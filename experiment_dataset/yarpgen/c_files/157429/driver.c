#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3524842469855723423ULL;
int var_13 = 522616771;
short var_14 = (short)31742;
int zero = 0;
signed char var_18 = (signed char)86;
int var_19 = 903891168;
unsigned long long int var_20 = 6670897901461469478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
