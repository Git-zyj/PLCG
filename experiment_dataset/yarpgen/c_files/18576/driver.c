#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3027737984U;
unsigned long long int var_6 = 11054115366840018417ULL;
unsigned long long int var_11 = 8673171205906947163ULL;
int zero = 0;
unsigned long long int var_12 = 14064812499957153779ULL;
unsigned int var_13 = 4056622082U;
unsigned int var_14 = 3018683054U;
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
