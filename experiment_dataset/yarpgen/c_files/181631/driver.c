#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-21910;
signed char var_7 = (signed char)67;
signed char var_11 = (signed char)-45;
signed char var_16 = (signed char)0;
int zero = 0;
signed char var_19 = (signed char)10;
unsigned long long int var_20 = 12110555929212833585ULL;
long long int var_21 = -2559730520705233536LL;
unsigned long long int var_22 = 14651583744870100845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
