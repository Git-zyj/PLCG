#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2566174617446446583LL;
unsigned long long int var_4 = 6178721346913191267ULL;
signed char var_5 = (signed char)5;
unsigned int var_6 = 1260235769U;
int var_7 = -575706616;
unsigned int var_9 = 3090658352U;
unsigned short var_12 = (unsigned short)6743;
int zero = 0;
long long int var_13 = 1572485103867344003LL;
long long int var_14 = -6903467440308324850LL;
signed char var_15 = (signed char)-34;
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
