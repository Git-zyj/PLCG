#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 171532213;
signed char var_3 = (signed char)-51;
long long int var_5 = 5954865699975187932LL;
unsigned char var_6 = (unsigned char)185;
int var_8 = -380953238;
signed char var_11 = (signed char)2;
unsigned int var_12 = 2697036461U;
int zero = 0;
long long int var_14 = 3726984928233718793LL;
unsigned char var_15 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
