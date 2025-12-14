#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14606928968414022661ULL;
unsigned long long int var_3 = 6054078544263010093ULL;
unsigned long long int var_10 = 14321632991736690677ULL;
unsigned long long int var_12 = 1453222420597430198ULL;
int zero = 0;
unsigned long long int var_14 = 14932755964709605022ULL;
unsigned long long int var_15 = 18050405594825775847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
