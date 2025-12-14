#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -844612488;
short var_3 = (short)-6869;
int var_9 = 259439826;
int zero = 0;
unsigned long long int var_10 = 7879341550377673758ULL;
int var_11 = 1154016830;
unsigned int var_12 = 505083146U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
