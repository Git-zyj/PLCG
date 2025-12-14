#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29789;
int var_6 = 1932571811;
long long int var_9 = -2587589158516910470LL;
int zero = 0;
short var_17 = (short)-29523;
signed char var_18 = (signed char)-63;
unsigned long long int var_19 = 3602630042127657046ULL;
unsigned long long int var_20 = 7098345863142561376ULL;
unsigned long long int var_21 = 8857209357859892564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
