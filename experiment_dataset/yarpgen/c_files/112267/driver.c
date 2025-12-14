#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4079;
short var_3 = (short)24918;
signed char var_4 = (signed char)55;
int var_9 = 274471372;
signed char var_10 = (signed char)-43;
long long int var_11 = 732136636295673806LL;
int zero = 0;
unsigned int var_13 = 4009531809U;
signed char var_14 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
