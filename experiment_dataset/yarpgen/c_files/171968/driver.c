#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
unsigned short var_3 = (unsigned short)50166;
signed char var_4 = (signed char)-84;
unsigned short var_9 = (unsigned short)45660;
int zero = 0;
unsigned short var_18 = (unsigned short)55979;
int var_19 = 133142788;
unsigned short var_20 = (unsigned short)54111;
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
