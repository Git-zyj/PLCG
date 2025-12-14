#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12077410926141979828ULL;
signed char var_4 = (signed char)62;
unsigned int var_5 = 2908063743U;
int var_9 = 81989560;
unsigned short var_14 = (unsigned short)35616;
long long int var_17 = 2208374312636644785LL;
int zero = 0;
int var_20 = -1325848772;
short var_21 = (short)19344;
unsigned short var_22 = (unsigned short)31448;
unsigned int var_23 = 2226433157U;
short var_24 = (short)-4809;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
