#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -547491831861383635LL;
signed char var_2 = (signed char)-31;
signed char var_12 = (signed char)3;
int zero = 0;
unsigned short var_17 = (unsigned short)35486;
long long int var_18 = 8301963824788635992LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
