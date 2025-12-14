#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 286345909U;
signed char var_3 = (signed char)4;
signed char var_5 = (signed char)52;
signed char var_6 = (signed char)4;
signed char var_7 = (signed char)-43;
signed char var_9 = (signed char)-120;
int zero = 0;
signed char var_10 = (signed char)54;
unsigned char var_11 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
