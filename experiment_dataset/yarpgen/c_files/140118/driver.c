#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-106;
unsigned char var_12 = (unsigned char)51;
unsigned int var_14 = 1523968108U;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
unsigned int var_18 = 1393440371U;
signed char var_19 = (signed char)-95;
unsigned char var_20 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
