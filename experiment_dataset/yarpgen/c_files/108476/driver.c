#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
signed char var_3 = (signed char)-43;
unsigned int var_4 = 3172461899U;
int zero = 0;
unsigned short var_11 = (unsigned short)46118;
int var_12 = 1773110475;
unsigned int var_13 = 3984834967U;
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
