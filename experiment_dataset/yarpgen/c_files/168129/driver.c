#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-65;
unsigned char var_8 = (unsigned char)34;
unsigned int var_10 = 604674766U;
int zero = 0;
unsigned int var_11 = 1356709298U;
int var_12 = 745213803;
int var_13 = -2097748186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
