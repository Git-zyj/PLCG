#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2457438385U;
unsigned int var_1 = 291822494U;
unsigned int var_4 = 429126576U;
unsigned int var_5 = 4166626772U;
unsigned int var_6 = 1511563118U;
unsigned int var_7 = 663583275U;
unsigned int var_8 = 2823569888U;
unsigned int var_10 = 3756783690U;
int zero = 0;
unsigned int var_15 = 1066776609U;
unsigned int var_16 = 3960888476U;
unsigned int var_17 = 3620995481U;
unsigned int var_18 = 192151486U;
unsigned int var_19 = 1825988690U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
