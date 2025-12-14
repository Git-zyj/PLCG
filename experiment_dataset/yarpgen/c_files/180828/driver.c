#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
long long int var_1 = -4150419346840833958LL;
unsigned long long int var_7 = 13419302156296531086ULL;
int zero = 0;
long long int var_11 = -3693461854216082387LL;
short var_12 = (short)-29609;
signed char var_13 = (signed char)-117;
short var_14 = (short)30007;
signed char var_15 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
