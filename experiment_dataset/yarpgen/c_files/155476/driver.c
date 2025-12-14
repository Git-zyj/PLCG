#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6399398893874063889ULL;
signed char var_9 = (signed char)-20;
signed char var_12 = (signed char)101;
int zero = 0;
unsigned long long int var_13 = 1754850229562847221ULL;
signed char var_14 = (signed char)-121;
void init() {
}

void checksum() {
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
