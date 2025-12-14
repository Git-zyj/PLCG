#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10338604220731835080ULL;
int var_1 = -1764703570;
signed char var_7 = (signed char)40;
signed char var_8 = (signed char)-16;
int var_9 = 923693092;
int zero = 0;
short var_12 = (short)11191;
unsigned int var_13 = 3776321745U;
unsigned long long int var_14 = 12843492379003133689ULL;
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
