#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1173377224;
unsigned int var_8 = 3503741497U;
int var_9 = 224400312;
int var_19 = 1396897974;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
short var_21 = (short)30370;
signed char var_22 = (signed char)116;
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
