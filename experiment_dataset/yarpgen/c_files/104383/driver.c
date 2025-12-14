#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)45;
unsigned short var_5 = (unsigned short)23315;
unsigned long long int var_9 = 5181888603717288720ULL;
int zero = 0;
signed char var_12 = (signed char)-88;
long long int var_13 = 2755656728132488648LL;
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
