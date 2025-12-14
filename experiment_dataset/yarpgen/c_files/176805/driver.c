#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 277777143733698001ULL;
int var_4 = 353401911;
signed char var_7 = (signed char)104;
unsigned long long int var_8 = 14899278060776962685ULL;
int var_11 = 1159381277;
int zero = 0;
short var_20 = (short)-25391;
unsigned int var_21 = 2255287247U;
unsigned long long int var_22 = 11662057362855631769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
