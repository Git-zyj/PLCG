#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1117293601;
unsigned int var_2 = 319155337U;
unsigned int var_5 = 625591457U;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
signed char var_19 = (signed char)114;
int var_20 = -539047320;
signed char var_21 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
