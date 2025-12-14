#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3969806846095502929ULL;
long long int var_5 = -6449133505829208234LL;
unsigned int var_8 = 4133888532U;
int var_9 = 1405879878;
short var_11 = (short)5777;
int zero = 0;
short var_12 = (short)-15038;
int var_13 = -1402273443;
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
