#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -285940054;
unsigned int var_3 = 1422531099U;
int var_4 = 199686235;
int zero = 0;
signed char var_18 = (signed char)(-127 - 1);
int var_19 = 1061366903;
unsigned char var_20 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
