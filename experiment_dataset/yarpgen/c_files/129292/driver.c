#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6178515531706614633LL;
signed char var_8 = (signed char)-28;
unsigned long long int var_10 = 16656166046065503704ULL;
int zero = 0;
unsigned long long int var_12 = 157383626903129742ULL;
unsigned char var_13 = (unsigned char)206;
int var_14 = -1690715343;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
