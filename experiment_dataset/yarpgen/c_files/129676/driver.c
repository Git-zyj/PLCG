#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20768;
signed char var_7 = (signed char)7;
unsigned short var_12 = (unsigned short)59500;
int zero = 0;
int var_17 = -2049446994;
unsigned long long int var_18 = 12553962200493179704ULL;
unsigned int var_19 = 3140154342U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
