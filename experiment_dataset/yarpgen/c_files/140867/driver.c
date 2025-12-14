#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1666569341;
short var_9 = (short)31654;
signed char var_10 = (signed char)100;
int zero = 0;
unsigned long long int var_13 = 17400648627670734304ULL;
unsigned long long int var_14 = 6439032375101445876ULL;
void init() {
}

void checksum() {
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
