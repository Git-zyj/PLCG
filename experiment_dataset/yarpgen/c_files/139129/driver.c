#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)709;
int var_3 = -993268405;
long long int var_5 = 8944936473798939674LL;
short var_6 = (short)-23102;
int var_7 = -1727286103;
short var_9 = (short)2279;
int zero = 0;
short var_10 = (short)18878;
short var_11 = (short)7451;
int var_12 = 1198730101;
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
