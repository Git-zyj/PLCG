#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 531760833U;
signed char var_3 = (signed char)-34;
unsigned int var_6 = 1390009324U;
unsigned int var_9 = 1065251169U;
int zero = 0;
unsigned int var_11 = 3119567899U;
unsigned int var_12 = 172709346U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
