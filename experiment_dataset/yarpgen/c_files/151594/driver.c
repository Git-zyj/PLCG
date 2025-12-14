#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2020929652;
signed char var_1 = (signed char)32;
signed char var_4 = (signed char)109;
signed char var_5 = (signed char)-54;
int var_7 = 547538308;
int var_8 = 1087660880;
signed char var_9 = (signed char)50;
int zero = 0;
int var_10 = 1803241596;
signed char var_11 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
