#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
unsigned long long int var_3 = 17630952553793843367ULL;
signed char var_4 = (signed char)-66;
signed char var_8 = (signed char)118;
unsigned char var_11 = (unsigned char)179;
int zero = 0;
unsigned char var_13 = (unsigned char)169;
signed char var_14 = (signed char)67;
unsigned char var_15 = (unsigned char)34;
void init() {
}

void checksum() {
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
