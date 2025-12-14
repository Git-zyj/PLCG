#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -56888230489479885LL;
signed char var_9 = (signed char)-56;
int var_13 = 520271506;
unsigned long long int var_15 = 6014293973965161429ULL;
int zero = 0;
unsigned int var_19 = 239469004U;
unsigned long long int var_20 = 10153443981695547346ULL;
unsigned int var_21 = 1130883100U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
