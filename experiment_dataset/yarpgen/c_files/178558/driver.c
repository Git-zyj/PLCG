#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24726;
unsigned long long int var_3 = 2520110268488147035ULL;
signed char var_4 = (signed char)94;
int var_8 = -297972951;
int zero = 0;
int var_16 = -1122349501;
unsigned char var_17 = (unsigned char)80;
unsigned long long int var_18 = 17482511677848168014ULL;
long long int var_19 = 4967902111776719573LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
