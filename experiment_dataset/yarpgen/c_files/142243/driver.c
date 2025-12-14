#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3231767885469141934ULL;
unsigned char var_12 = (unsigned char)212;
unsigned char var_13 = (unsigned char)115;
int zero = 0;
signed char var_19 = (signed char)67;
int var_20 = 279990797;
void init() {
}

void checksum() {
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
