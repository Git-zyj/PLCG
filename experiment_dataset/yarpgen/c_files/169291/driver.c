#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1935534038U;
long long int var_7 = 27820100615353392LL;
long long int var_11 = 4201614840414287829LL;
unsigned int var_12 = 3180020502U;
int zero = 0;
signed char var_13 = (signed char)-41;
long long int var_14 = 1310712113076991993LL;
signed char var_15 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
