#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 199465621;
int var_4 = -898691963;
signed char var_5 = (signed char)89;
signed char var_9 = (signed char)-96;
int zero = 0;
int var_12 = 268726321;
int var_13 = -441309265;
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
