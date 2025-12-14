#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_4 = 4283300570593747956LL;
long long int var_6 = -5223869946882243636LL;
long long int var_9 = -9019481643687667771LL;
int var_12 = 127325097;
unsigned char var_13 = (unsigned char)102;
unsigned char var_15 = (unsigned char)61;
int zero = 0;
long long int var_16 = 8482722495332650624LL;
int var_17 = -766729779;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
