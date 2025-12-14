#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1792949195U;
signed char var_4 = (signed char)-9;
unsigned int var_6 = 2110396737U;
unsigned long long int var_7 = 10057547962581258491ULL;
int var_9 = 2112238552;
int zero = 0;
long long int var_19 = 6819666411246950461LL;
int var_20 = -416285652;
unsigned long long int var_21 = 425288479600316550ULL;
long long int var_22 = 6674978457108387194LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
