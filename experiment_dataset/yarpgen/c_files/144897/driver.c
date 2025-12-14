#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13854268307434332117ULL;
short var_5 = (short)30300;
int var_8 = 1708598634;
int zero = 0;
unsigned long long int var_12 = 17082308509017258951ULL;
unsigned long long int var_13 = 1889483952823952689ULL;
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
