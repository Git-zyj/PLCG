#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)30;
unsigned long long int var_6 = 7978509361195608593ULL;
int var_18 = -1057467138;
int zero = 0;
long long int var_20 = 8030425440649570722LL;
unsigned char var_21 = (unsigned char)16;
unsigned int var_22 = 3824074787U;
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
