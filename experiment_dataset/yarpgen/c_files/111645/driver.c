#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
unsigned long long int var_3 = 8511391591410466706ULL;
short var_7 = (short)26071;
long long int var_9 = -9070232811449788888LL;
int var_18 = -55731870;
int zero = 0;
unsigned int var_20 = 1534891901U;
int var_21 = 834727364;
signed char var_22 = (signed char)32;
unsigned short var_23 = (unsigned short)26392;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
