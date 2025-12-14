#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned long long int var_3 = 17372111615720469793ULL;
int var_10 = 2081148747;
unsigned char var_11 = (unsigned char)206;
signed char var_12 = (signed char)113;
int zero = 0;
signed char var_13 = (signed char)-109;
int var_14 = -1781901363;
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
