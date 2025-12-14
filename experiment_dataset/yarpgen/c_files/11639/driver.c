#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
int var_3 = 1049380431;
signed char var_6 = (signed char)-57;
signed char var_7 = (signed char)75;
signed char var_8 = (signed char)87;
int var_9 = 257009907;
int zero = 0;
int var_15 = -331904721;
signed char var_16 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
