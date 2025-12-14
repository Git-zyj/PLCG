#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-51;
unsigned int var_9 = 262947533U;
unsigned int var_11 = 1235275870U;
long long int var_18 = 751997774799774368LL;
int zero = 0;
unsigned char var_20 = (unsigned char)75;
unsigned char var_21 = (unsigned char)37;
void init() {
}

void checksum() {
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
