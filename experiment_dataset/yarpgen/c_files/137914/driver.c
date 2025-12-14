#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28900;
_Bool var_6 = (_Bool)1;
signed char var_12 = (signed char)-60;
signed char var_13 = (signed char)-25;
unsigned long long int var_16 = 4375149904031294917ULL;
int zero = 0;
int var_19 = -1566376742;
short var_20 = (short)-22246;
void init() {
}

void checksum() {
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
