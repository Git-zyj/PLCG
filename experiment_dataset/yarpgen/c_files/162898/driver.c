#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 66837892;
unsigned long long int var_4 = 4266019919878878197ULL;
int var_9 = -1370764924;
int zero = 0;
short var_12 = (short)17843;
short var_13 = (short)9603;
int var_14 = -1743134074;
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
