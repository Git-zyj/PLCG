#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1921286624;
unsigned int var_13 = 4291340870U;
int zero = 0;
int var_14 = -1116143402;
signed char var_15 = (signed char)6;
int var_16 = -304290750;
signed char var_17 = (signed char)31;
unsigned long long int var_18 = 10433649907797710047ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
