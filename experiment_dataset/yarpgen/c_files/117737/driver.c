#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned long long int var_1 = 8858909239630626024ULL;
unsigned char var_3 = (unsigned char)113;
signed char var_9 = (signed char)-87;
int zero = 0;
short var_14 = (short)3612;
int var_15 = 1156360656;
unsigned char var_16 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
