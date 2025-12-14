#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4034035519U;
int var_5 = -620771548;
int var_7 = -1204269460;
signed char var_12 = (signed char)-17;
int var_13 = -851662966;
int zero = 0;
unsigned int var_15 = 1857943480U;
int var_16 = 545897446;
signed char var_17 = (signed char)-105;
signed char var_18 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
