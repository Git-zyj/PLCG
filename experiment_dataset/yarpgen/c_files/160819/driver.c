#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
signed char var_5 = (signed char)54;
signed char var_9 = (signed char)54;
int zero = 0;
signed char var_13 = (signed char)-89;
unsigned long long int var_14 = 10070101939196014098ULL;
unsigned int var_15 = 3053877025U;
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
